//
//  TeamHintRequest.h
//  GroundIOS
//
//  Created by Gyuyoung Hwang on 2013. 11. 11..
//  Copyright (c) 2013년 AnB. All rights reserved.
//

#import "DefaultRequest.h"

@interface TeamHintRequest : DefaultRequest<DefaultRequestProtocol>

@property (nonatomic, assign) NSInteger teamId;
@property (nonatomic, strong) NSString *protocolName;

@end
