
#import "FMDatabase.h"
#import "FMDatabaseAdditions.h"
#import <Foundation/Foundation.h>

@interface DB : NSObject
{
    FMDatabase * db;
}

@property (nonatomic,retain) FMDatabase * db;

+(id)access;

// *** SS

-(UIImage*)getScreenShot;

-(void)SS_sendUserInfo:(NSString*)player_;
-(void)SS_foundHiddenBrainInMenu_player:(NSString*)player_;
-(void)SS_sharegame_player:(NSString*)player_ level:(int)level_ type:(NSString*)type_;
-(void)SS_rategame_player:(NSString*)player_;
-(void)SS_endgame_player:(NSString*)player_ level:(int)level_ brains:(int)brains_ time:(int)time_ score:(int)score_;
-(void)SS_purchase_player:(NSString*)player type:(NSString*)type_ state:(int)state_;

-(void)incraseBrainCounter;

-(int)getBrainsCounter;

-(int)getLevelsCount;

-(int)getAllLevelsScore;

-(int)getAllLevelsTime;

-(void)ShowAllRecordsFromScoresTable;

-(int)getHighTIMEForLevel:(int)level_;

-(int)getHighScoreForLevel:(int)level_;

-(BOOL)setScoreForLevel:(int)level_ score:(int)score_ time:(int)time_;



@end