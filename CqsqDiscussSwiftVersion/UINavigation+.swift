//
//  UINavigation+.swift
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/14.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

import Foundation
import UIKit
public extension UINavigationController{
    public func addSwipeAnyWhereGesture(){
        let gesture = self.interactivePopGestureRecognizer!
        gesture.enabled = false
        let gestureView = gesture.view!
        let _targets:NSMutableArray = gesture.valueForKey("_targets") as! NSMutableArray
        let gestureRecognizerTargets = _targets.firstObject!
        let navigationInteractiveTransition = gestureRecognizerTargets.valueForKey("_target")!
        let handleTransition = Selector("handleNavigationTransition:")
        let popRecognizer = UIPanGestureRecognizer(target: navigationInteractiveTransition, action: handleTransition)
        gestureView.addGestureRecognizer(popRecognizer)
    }
    public func customBar(){
        let att = [NSForegroundColorAttributeName:UIColor.whiteColor()]
        navigationBar.titleTextAttributes = att
        navigationBar.barTintColor = colorToRGB(Int(51),g: Int(85),b: Int(122))
    }
}