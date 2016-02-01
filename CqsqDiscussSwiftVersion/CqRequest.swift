//
//  CqRequest.swift
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/28.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

import Foundation
import Alamofire
import RxSwift

class CqRequest : NSObject{
    static let single : CqRequest = CqRequest()
    let disposeBag = DisposeBag()
}
extension CqRequest{
    internal func LoginRequest()->PublishSubject<LoginModel>{
    let param  =  ["device": "\(DeviceInfo().deviceNo)","screen":"\(SCREEN_WIDTH*(UIScreen.mainScreen().scale))x\(SCREEN_HEIGHT*(UIScreen.mainScreen().scale))","os":"ios\(UIDevice.currentDevice().systemVersion)","model":"\(DeviceInfo().deviceModel)","brand":"apple","version":NSBundle.mainBundle().objectForInfoDictionaryKey("CFBundleShortVersionString")!]
    print("\(param)")
        
        let psubject = PublishSubject<LoginModel>()
        
       Alamofire.request(.GET, "https://app.cq.cm/public/configs",parameters:param).responseJSON(completionHandler: { (request, response, result) -> Void in
            print(request)  // original URL request
            print(response) // URL response
            //        print(response.data)     // server data
            print(result)   // result of response serialization
            do {
                let model = try LoginModel(dictionary: result.value as! [NSObject : AnyObject])
                print("model:\(model)")
                psubject.on(.Next(model))
            } catch let error as NSError {
                print("Error: \(error.domain)")
            }
            
            if let JSON = result.value {
                print("JSON: \(JSON)")
            }
        })
    return psubject
  }
}