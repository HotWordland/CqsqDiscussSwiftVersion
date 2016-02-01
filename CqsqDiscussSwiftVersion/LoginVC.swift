//
//  LoginVC.swift
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/19.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

import UIKit
import RxSwift
import RxCocoa

let mincharcounter = 5
class LoginVC: UIViewController {
    var txtUsername:UITextField!
    var txtPassword:UITextField!
    var sureBtn:UIButton!
    var disposeBag = DisposeBag()
    init(){
      super.init(nibName: nil, bundle: nil)
        txtUsername = UITextField()
        txtPassword = UITextField()
        sureBtn = UIButton()
        txtUsername.backgroundColor = UIColor.purpleColor()
        txtPassword.backgroundColor = UIColor.brownColor()
        txtUsername.borderStyle = .RoundedRect
        txtPassword.borderStyle = .RoundedRect
        txtUsername.textColor = UIColor.whiteColor()
        txtPassword.textColor = UIColor.whiteColor()
        sureBtn.setTitleColor(UIColor.whiteColor(), forState: .Normal)
        sureBtn.setTitle("commit", forState: .Normal)
        sureBtn.setTitle("not enble", forState: .Disabled)
        sureBtn.backgroundColor = UIColor.purpleColor()
        sureBtn.layer.cornerRadius = 5
        view.addSubview(txtUsername)
        view.addSubview(txtPassword)
        view.addSubview(sureBtn)
        //layout
        txtUsername.snp_makeConstraints { (make) -> Void in
            make.left.equalTo(20)
            make.right.equalTo(-20)
            make.top.equalTo(70)
            make.height.equalTo(30)
        }
        txtPassword.snp_makeConstraints { (make) -> Void in
            make.left.right.equalTo(txtUsername)
            make.top.equalTo(txtUsername.snp_bottom).offset(8)
            make.height.equalTo(30)
        }
        sureBtn.snp_makeConstraints { (make) -> Void in
            make.left.equalTo(20)
            make.right.equalTo(-20)
            make.height.equalTo(30)
            make.top.equalTo(txtPassword.snp_bottom).offset(8)
        }
        
    }

    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    override func viewDidLoad() {
        
        super.viewDidLoad()
        view.backgroundColor = UIColor.whiteColor()
        let usernameVaild = txtUsername.rx_text
            .map({$0.characters.count>=mincharcounter})
            .shareReplay(1)
        let passwordVaild = txtPassword.rx_text
            .map({$0.characters.count>=mincharcounter})
            .shareReplay(1)
        
        let everythingValid = Observable.combineLatest(usernameVaild, passwordVaild) { $0 && $1 }
            .shareReplay(1)
        everythingValid
        .bindTo(sureBtn.rx_enabled)
        .addDisposableTo(disposeBag)
        
        sureBtn.rx_tap
            .subscribeNext({[unowned self] in
                self.loadData()
                })
        .addDisposableTo(disposeBag)
        

        // Do any additional setup after loading the view.
        

    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
   

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
extension LoginVC{
    private func loadData(){
        CqRequest.single.LoginRequest().subscribeNext { (model) -> Void in
            print("call back with vc model is \(model)")
        }.addDisposableTo(disposeBag)
    }
}
