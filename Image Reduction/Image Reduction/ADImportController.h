//
//  ADImportController.h
// 	This file is part of Image Reduction.
//
//    Image Reduction is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    Image Reduction is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with Image Reduction.  If not, see <http://www.gnu.org/licenses/>.
//
//  Copyright (c) 2013 Dieudonné Willems. All rights reserved.
//
//  Created by Don Willems on 24-05-13.
//
//

#import <Foundation/Foundation.h>
#import <ImageReductionPlugin/ImageReductionPlugin.h>

@interface ADImportController : NSObject {
    NSMutableArray *importers;
    NSMutableArray *stack;
    BOOL running;
}

+ (ADImportController*) sharedImportController;

- (void) reloadImporters;

- (NSArray*) supportedFileTypes;
- (id<ADImporter>) importerForFile:(NSString*)path;

- (void) addFileToStack:(NSString*)path withSeed:(NSUInteger)seed;

- (BOOL) running;
@end
