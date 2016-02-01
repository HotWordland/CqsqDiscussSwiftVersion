//
//  Color+.swift
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/14.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

import Foundation
public func colorToRGB(r:Int,g:Int,b:Int)->UIColor{
    return UIColor(red: CGFloat(r)/255.0, green: CGFloat(g)/255.0, blue: CGFloat(b)/255.0, alpha: 1)
}
