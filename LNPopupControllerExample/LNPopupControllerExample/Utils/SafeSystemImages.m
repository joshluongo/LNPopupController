//
//  SafeSystemImages.m
//  LNPopupControllerExample
//
//  Created by Leo Natan on 01/09/2023.
//  Copyright © 2023 Leo Natan. All rights reserved.
//

#include "SafeSystemImages.h"

UIImage* LNSystemImage(NSString* named, BOOL useCompactConfig)
{
	static UIImageSymbolConfiguration* largeConfig = nil;
	static UIImageSymbolConfiguration* compactConfig = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		largeConfig = [UIImageSymbolConfiguration configurationWithScale:UIImageSymbolScaleUnspecified];
		compactConfig = [UIImageSymbolConfiguration configurationWithScale:UIImageSymbolScaleMedium];
	});
	
	UIImageSymbolConfiguration* config;
	if(useCompactConfig)
	{
		config = compactConfig;
	}
	else
	{
		config = largeConfig;
	}
	
	return [UIImage systemImageNamed:named withConfiguration:config];
}
