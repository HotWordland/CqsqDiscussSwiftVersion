//
//  WebVC.swift
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/29.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

import UIKit

class WebVC: UIViewController {

    @IBOutlet weak var webView: UIWebView!
    override func viewDidLoad() {
        super.viewDidLoad()
        webView.loadRequest(NSURLRequest(URL: NSURL(string: "https://itunes.apple.com/cn/app/zhong-qing-she-qu/id1068079302")!))

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
