//
//  ViewController.h
//  Documents
//
//  Created by Mahaboobsab Nadaf on 31/08/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIDocumentInteractionControllerDelegate>
- (IBAction)previewDocument:(id)sender;

- (IBAction)openDocument:(id)sender;

@end

