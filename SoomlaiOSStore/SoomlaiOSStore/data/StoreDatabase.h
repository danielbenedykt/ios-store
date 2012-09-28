/*
 * Copyright (C) 2012 Soomla Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

/**
 * The StoreDatabase provides basic Coredata database functions for specific needs around the SDK.
 */
@interface StoreDatabase : NSObject {

}

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

/**
 * Updates the balance of the virtual currency with the given itemId.
 * itemId is the item id of the required virtual currency.
 * balance is the required virtual currency's new balance.
 */
- (void)updateCurrencyBalanceWithItemID:(NSString*)itemId andBalance:(NSNumber*)balance;
/**
 * Updates the balance of the virtual good with the given itemId.
 * itemId is the item id of the required virtual good.
 * balance is the required virtual good's new balance.
 */
- (void)updateGoodBalanceWithItemId:(NSString*)itemId andBalance:(NSNumber*)balance;
/**
 * Fetch a single virtual currency information with the given itemId.
 * itemId is the required currency's item id.
 */
- (NSDictionary*)getCurrencyBalanceWithItemId:(NSString*)itemId;
/**
 * Fetch a single virtual good information with the given itemId.
 * itemId is the required good's item id.
 */
- (NSDictionary*)getGoodBalanceWithItemId:(NSString*)itemId;
/**
 * Overwrites the current storeinfo information with a new one.
 * storeinfo is the new store information.
 */
- (void)setStoreInfo:(NSString*)storeInfoData;
/**
 * Overwrites the current storefrontinfo information with a new one.
 * storefrontinfo is the new storefront information.
 */
- (void)setStorefrontInfo:(NSString*)storefrontInfoData;
/**
 * Fetch the current storeInfo information with a new one.
 */
- (NSString*)getStoreInfo;
/**
 * Fetch the current storefrontInfo information with a new one.
 */
- (NSString*)getStorefrontInfo;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
@end
