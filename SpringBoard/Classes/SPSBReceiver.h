// SPSBReceiver.h
// (c) 2018 opa334

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

@class CPDistributedMessagingCenter, SSDownloadQueue;

@interface SPSBReceiver : NSObject
{
  CPDistributedMessagingCenter* _messagingCenter;
  NSDictionary* _displayNamesForPaths;
  SSDownloadQueue* _downloadQueue;
}

- (NSDictionary*)testConnection:(NSString*)name withUserInfo:(NSDictionary*)userInfo;
- (NSDictionary*)pushBulletin:(NSString*)name withUserInfo:(NSDictionary*)userInfo;
- (NSDictionary*)handleFileOperation:(NSString*)name withUserInfo:(NSDictionary*)serializedUserInfo;
//- (NSDictionary*)importToMusicLibrary:(NSString*)name withUserInfo:(NSDictionary*)serializedUserInfo;
- (NSDictionary*)getApplicationDisplayName:(NSString*)name withUserInfo:(NSDictionary*)serializedUserInfo;

@end
