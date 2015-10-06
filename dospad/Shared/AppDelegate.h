/*
 *  Copyright (C) 2010  Chaoji Li
 *
 *  DOSPAD is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#import <Foundation/Foundation.h>
#import "SDL_uikitappdelegate.h"
#import "DosEmuThread.h"
#import "MongooseDaemon.h"

@interface AppDelegate : SDLUIKitDelegate 
{
	UINavigationController *navController;
	SDL_uikitopenglview *screenView;
	DosEmuThread * emuThread;
	int cycles;
	int frameskip;
	int maxPercent;
	
	MongooseDaemon   *mongooseDaemon;
}

@property (nonatomic, readonly) int cycles;
@property (nonatomic, readonly) int frameskip;
@property (nonatomic, readonly) int maxPercent;
@property (nonatomic, readonly) MongooseDaemon *httpDaemon;
-(void)onLaunchExit;

@end
