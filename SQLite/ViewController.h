//
//  ViewController.h
//  SQLite
//
//  Created by Anastasiia Staiko on 5/19/16.
//  Copyright © 2016 Anastasiia Staiko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *DB;
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;

- (IBAction)save:(id)sender;
- (IBAction)find:(id)sender;
- (IBAction)remove:(id)sender;







@end

