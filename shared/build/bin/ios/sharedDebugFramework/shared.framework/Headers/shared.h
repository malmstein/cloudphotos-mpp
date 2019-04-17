#import <Foundation/Foundation.h>

@class SharedApi, SharedRealNetworkClient, SharedHttpBinClient, SharedListMediaItemsResponse, SharedGooglePhoto, SharedListMediaItemsResponseCompanion, SharedListMediaItemsResponse$serializer, SharedKotlinArray, SharedListMediaItemsRequest, SharedFilter, SharedListMediaItemsRequestCompanion, SharedListMediaItemsRequest$serializer, SharedListMediaItemsLastPageRequest, SharedListMediaItemsLastPageRequestCompanion, SharedListMediaItemsLastPageRequest$serializer, SharedMediaTypeFilter, SharedFilterCompanion, SharedFilter$serializer, SharedMediaType, SharedMediaTypeFilterCompanion, SharedMediaTypeFilter$serializer, SharedKotlinEnum, SharedListMediaItemError, SharedListMediaItemErrorCompanion, SharedListMediaItemError$serializer, SharedMediaMetadata, SharedMediaMetadataCompanion, SharedMediaMetadata$serializer, SharedGooglePhotoCompanion, SharedGooglePhoto$serializer, SharedInstagramResponseJson, SharedInstagramMetaJson, SharedInstagramPaginationJson, SharedInstagramMediaJson, SharedInstagramResponseJsonCompanion, SharedInstagramResponseJson$serializer, SharedInstagramMetaJsonCompanion, SharedInstagramMetaJson$serializer, SharedInstagramPaginationJsonCompanion, SharedInstagramPaginationJson$serializer, SharedInstagramResolutionJson, SharedInstagramMediaJsonCompanion, SharedInstagramMediaJson$serializer, SharedInstagramImageJson, SharedInstagramResolutionJsonCompanion, SharedInstagramResolutionJson$serializer, SharedInstagramImageJsonCompanion, SharedInstagramImageJson$serializer, SharedInstagramPhoto, SharedInstagramPhotoCompanion, SharedInstagramPhoto$serializer, SharedPhotosRepository, SharedKotlinUnit, SharedKotlinx_serialization_runtime_nativeEnumDescriptor, SharedKotlinx_serialization_runtime_nativeSerialKind, SharedKotlinNothing, SharedKotlinx_serialization_runtime_nativeUpdateMode, SharedKotlinx_serialization_runtime_nativeSerialClassDescImpl;

@protocol SharedNetworkClient, SharedKotlinx_serialization_runtime_nativeKSerializer, SharedKotlinx_serialization_runtime_nativeGeneratedSerializer, SharedKotlinx_serialization_runtime_nativeSerializationStrategy, SharedKotlinx_serialization_runtime_nativeEncoder, SharedKotlinx_serialization_runtime_nativeSerialDescriptor, SharedKotlinx_serialization_runtime_nativeDeserializationStrategy, SharedKotlinx_serialization_runtime_nativeDecoder, SharedKotlinComparable, SharedKotlinIterator, SharedKotlinx_serialization_runtime_nativeCompositeEncoder, SharedKotlinx_serialization_runtime_nativeSerialModule, SharedKotlinAnnotation, SharedKotlinx_serialization_runtime_nativeCompositeDecoder, SharedKotlinx_serialization_runtime_nativeSerialModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface SharedApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SharedRealNetworkClient *client __attribute__((swift_name("client")));
@end;

__attribute__((swift_name("NetworkClient")))
@protocol SharedNetworkClient
@required
@end;

__attribute__((swift_name("RealNetworkClient")))
@interface SharedRealNetworkClient : KotlinBase <SharedNetworkClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBinClient")))
@interface SharedHttpBinClient : SharedRealNetworkClient
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ListMediaItemsResponse")))
@interface SharedListMediaItemsResponse : KotlinBase
- (instancetype)initWithMediaItems:(NSMutableArray<SharedGooglePhoto *> *)mediaItems nextPageToken:(NSString * _Nullable)nextPageToken __attribute__((swift_name("init(mediaItems:nextPageToken:)"))) __attribute__((objc_designated_initializer));
@property NSMutableArray<SharedGooglePhoto *> *mediaItems __attribute__((swift_name("mediaItems")));
@property NSString * _Nullable nextPageToken __attribute__((swift_name("nextPageToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsResponse.Companion")))
@interface SharedListMediaItemsResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol SharedKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol SharedKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol SharedKotlinx_serialization_runtime_nativeKSerializer <SharedKotlinx_serialization_runtime_nativeSerializationStrategy, SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol SharedKotlinx_serialization_runtime_nativeGeneratedSerializer <SharedKotlinx_serialization_runtime_nativeKSerializer>
@required
- (SharedKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsResponse.$serializer")))
@interface SharedListMediaItemsResponse$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedListMediaItemsResponse *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedListMediaItemsResponse *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedListMediaItemsResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedListMediaItemsResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest")))
@interface SharedListMediaItemsRequest : KotlinBase
- (instancetype)initWithFilter:(SharedFilter *)filter pageToken:(NSString * _Nullable)pageToken __attribute__((swift_name("init(filter:pageToken:)"))) __attribute__((objc_designated_initializer));
- (SharedFilter *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedListMediaItemsRequest *)doCopyFilter:(SharedFilter *)filter pageToken:(NSString * _Nullable)pageToken __attribute__((swift_name("doCopy(filter:pageToken:)")));
@property (readonly) SharedFilter *filter __attribute__((swift_name("filter")));
@property (readonly) NSString * _Nullable pageToken __attribute__((swift_name("pageToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest.Companion")))
@interface SharedListMediaItemsRequestCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedListMediaItemsRequest * _Nullable)fromStringString:(NSString *)string __attribute__((swift_name("fromString(string:)")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest.$serializer")))
@interface SharedListMediaItemsRequest$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedListMediaItemsRequest *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedListMediaItemsRequest *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedListMediaItemsRequest *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedListMediaItemsRequest *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest")))
@interface SharedListMediaItemsLastPageRequest : KotlinBase
- (instancetype)initWithFilters:(SharedFilter *)filters __attribute__((swift_name("init(filters:)"))) __attribute__((objc_designated_initializer));
- (SharedFilter *)component1 __attribute__((swift_name("component1()")));
- (SharedListMediaItemsLastPageRequest *)doCopyFilters:(SharedFilter *)filters __attribute__((swift_name("doCopy(filters:)")));
@property (readonly) SharedFilter *filters __attribute__((swift_name("filters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest.Companion")))
@interface SharedListMediaItemsLastPageRequestCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest.$serializer")))
@interface SharedListMediaItemsLastPageRequest$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedListMediaItemsLastPageRequest *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedListMediaItemsLastPageRequest *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedListMediaItemsLastPageRequest *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedListMediaItemsLastPageRequest *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter")))
@interface SharedFilter : KotlinBase
- (instancetype)initWithMediaTypeFilter:(SharedMediaTypeFilter *)mediaTypeFilter __attribute__((swift_name("init(mediaTypeFilter:)"))) __attribute__((objc_designated_initializer));
- (SharedMediaTypeFilter *)component1 __attribute__((swift_name("component1()")));
- (SharedFilter *)doCopyMediaTypeFilter:(SharedMediaTypeFilter *)mediaTypeFilter __attribute__((swift_name("doCopy(mediaTypeFilter:)")));
@property (readonly) SharedMediaTypeFilter *mediaTypeFilter __attribute__((swift_name("mediaTypeFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter.Companion")))
@interface SharedFilterCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter.$serializer")))
@interface SharedFilter$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedFilter *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedFilter *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedFilter *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedFilter *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter")))
@interface SharedMediaTypeFilter : KotlinBase
- (instancetype)initWithMediaTypes:(NSArray<SharedMediaType *> *)mediaTypes __attribute__((swift_name("init(mediaTypes:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedMediaType *> *)component1 __attribute__((swift_name("component1()")));
- (SharedMediaTypeFilter *)doCopyMediaTypes:(NSArray<SharedMediaType *> *)mediaTypes __attribute__((swift_name("doCopy(mediaTypes:)")));
@property (readonly) NSArray<SharedMediaType *> *mediaTypes __attribute__((swift_name("mediaTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter.Companion")))
@interface SharedMediaTypeFilterCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter.$serializer")))
@interface SharedMediaTypeFilter$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedMediaTypeFilter *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedMediaTypeFilter *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedMediaTypeFilter *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedMediaTypeFilter *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum : KotlinBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaType")))
@interface SharedMediaType : SharedKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedMediaType *photo __attribute__((swift_name("photo")));
@property (class, readonly) SharedMediaType *video __attribute__((swift_name("video")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedMediaType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError")))
@interface SharedListMediaItemError : SharedListMediaItemsResponse
- (instancetype)initWithCode:(int32_t)code mediaItem:(NSMutableArray<SharedGooglePhoto *> *)mediaItem nextToken:(NSString * _Nullable)nextToken __attribute__((swift_name("init(code:mediaItem:nextToken:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMediaItems:(NSMutableArray<SharedGooglePhoto *> *)mediaItems nextPageToken:(NSString * _Nullable)nextPageToken __attribute__((swift_name("init(mediaItems:nextPageToken:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<SharedGooglePhoto *> *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedListMediaItemError *)doCopyCode:(int32_t)code mediaItem:(NSMutableArray<SharedGooglePhoto *> *)mediaItem nextToken:(NSString * _Nullable)nextToken __attribute__((swift_name("doCopy(code:mediaItem:nextToken:)")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSMutableArray<SharedGooglePhoto *> *mediaItem __attribute__((swift_name("mediaItem")));
@property (readonly) NSString * _Nullable nextToken __attribute__((swift_name("nextToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError.Companion")))
@interface SharedListMediaItemErrorCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError.$serializer")))
@interface SharedListMediaItemError$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedListMediaItemError *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedListMediaItemError *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedListMediaItemError *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedListMediaItemError *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata")))
@interface SharedMediaMetadata : KotlinBase
- (instancetype)initWithWidth:(NSString *)width height:(NSString *)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedMediaMetadata *)doCopyWidth:(NSString *)width height:(NSString *)height __attribute__((swift_name("doCopy(width:height:)")));
@property NSString *width __attribute__((swift_name("width")));
@property NSString *height __attribute__((swift_name("height")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata.Companion")))
@interface SharedMediaMetadataCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata.$serializer")))
@interface SharedMediaMetadata$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedMediaMetadata *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedMediaMetadata *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedMediaMetadata *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedMediaMetadata *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto")))
@interface SharedGooglePhoto : KotlinBase
- (instancetype)initWithId:(NSString *)id filename:(NSString *)filename mediaMetadata:(SharedMediaMetadata *)mediaMetadata baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(id:filename:mediaMetadata:baseUrl:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *filename __attribute__((swift_name("filename")));
@property (readonly) SharedMediaMetadata *mediaMetadata __attribute__((swift_name("mediaMetadata")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto.Companion")))
@interface SharedGooglePhotoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto.$serializer")))
@interface SharedGooglePhoto$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedGooglePhoto *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedGooglePhoto *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedGooglePhoto *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedGooglePhoto *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson")))
@interface SharedInstagramResponseJson : KotlinBase
- (instancetype)initWithMeta:(SharedInstagramMetaJson *)meta pagination:(SharedInstagramPaginationJson * _Nullable)pagination data:(NSMutableArray<SharedInstagramMediaJson *> *)data __attribute__((swift_name("init(meta:pagination:data:)"))) __attribute__((objc_designated_initializer));
- (SharedInstagramMetaJson *)component1 __attribute__((swift_name("component1()")));
- (SharedInstagramPaginationJson * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<SharedInstagramMediaJson *> *)component3 __attribute__((swift_name("component3()")));
- (SharedInstagramResponseJson *)doCopyMeta:(SharedInstagramMetaJson *)meta pagination:(SharedInstagramPaginationJson * _Nullable)pagination data:(NSMutableArray<SharedInstagramMediaJson *> *)data __attribute__((swift_name("doCopy(meta:pagination:data:)")));
@property (readonly) SharedInstagramMetaJson *meta __attribute__((swift_name("meta")));
@property (readonly) SharedInstagramPaginationJson * _Nullable pagination __attribute__((swift_name("pagination")));
@property (readonly) NSMutableArray<SharedInstagramMediaJson *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson.Companion")))
@interface SharedInstagramResponseJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramResponseJson *)empty __attribute__((swift_name("empty()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson.$serializer")))
@interface SharedInstagramResponseJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramResponseJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramResponseJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramResponseJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramResponseJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson")))
@interface SharedInstagramMetaJson : KotlinBase
- (instancetype)initWithCode:(int32_t)code errorType:(NSString * _Nullable)errorType errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(code:errorType:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedInstagramMetaJson *)doCopyCode:(int32_t)code errorType:(NSString * _Nullable)errorType errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(code:errorType:errorMessage:)")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable errorType __attribute__((swift_name("errorType")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson.Companion")))
@interface SharedInstagramMetaJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramMetaJson *)empty __attribute__((swift_name("empty()")));
- (SharedInstagramMetaJson *)success __attribute__((swift_name("success()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson.$serializer")))
@interface SharedInstagramMetaJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramMetaJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramMetaJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramMetaJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramMetaJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson")))
@interface SharedInstagramPaginationJson : KotlinBase
- (instancetype)initWithNextUrl:(NSString *)nextUrl next_max_id:(NSString *)next_max_id __attribute__((swift_name("init(nextUrl:next_max_id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedInstagramPaginationJson *)doCopyNextUrl:(NSString *)nextUrl next_max_id:(NSString *)next_max_id __attribute__((swift_name("doCopy(nextUrl:next_max_id:)")));
@property (readonly) NSString *nextUrl __attribute__((swift_name("nextUrl")));
@property (readonly) NSString *next_max_id __attribute__((swift_name("next_max_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson.Companion")))
@interface SharedInstagramPaginationJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramPaginationJson *)empty __attribute__((swift_name("empty()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson.$serializer")))
@interface SharedInstagramPaginationJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramPaginationJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramPaginationJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramPaginationJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramPaginationJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson")))
@interface SharedInstagramMediaJson : KotlinBase
- (instancetype)initWithId:(NSString *)id link:(NSString *)link type:(NSString *)type images:(SharedInstagramResolutionJson *)images __attribute__((swift_name("init(id:link:type:images:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedInstagramResolutionJson *)component4 __attribute__((swift_name("component4()")));
- (SharedInstagramMediaJson *)doCopyId:(NSString *)id link:(NSString *)link type:(NSString *)type images:(SharedInstagramResolutionJson *)images __attribute__((swift_name("doCopy(id:link:type:images:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) SharedInstagramResolutionJson *images __attribute__((swift_name("images")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson.Companion")))
@interface SharedInstagramMediaJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramMediaJson *)empty __attribute__((swift_name("empty()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson.$serializer")))
@interface SharedInstagramMediaJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramMediaJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramMediaJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramMediaJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramMediaJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson")))
@interface SharedInstagramResolutionJson : KotlinBase
- (instancetype)initWithStandard_resolution:(SharedInstagramImageJson *)standard_resolution thumbnail:(SharedInstagramImageJson *)thumbnail __attribute__((swift_name("init(standard_resolution:thumbnail:)"))) __attribute__((objc_designated_initializer));
- (SharedInstagramImageJson *)component1 __attribute__((swift_name("component1()")));
- (SharedInstagramImageJson *)component2 __attribute__((swift_name("component2()")));
- (SharedInstagramResolutionJson *)doCopyStandard_resolution:(SharedInstagramImageJson *)standard_resolution thumbnail:(SharedInstagramImageJson *)thumbnail __attribute__((swift_name("doCopy(standard_resolution:thumbnail:)")));
@property (readonly) SharedInstagramImageJson *standard_resolution __attribute__((swift_name("standard_resolution")));
@property (readonly) SharedInstagramImageJson *thumbnail __attribute__((swift_name("thumbnail")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson.Companion")))
@interface SharedInstagramResolutionJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramResolutionJson *)empty __attribute__((swift_name("empty()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson.$serializer")))
@interface SharedInstagramResolutionJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramResolutionJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramResolutionJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramResolutionJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramResolutionJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson")))
@interface SharedInstagramImageJson : KotlinBase
- (instancetype)initWithUrl:(NSString *)url width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedInstagramImageJson *)doCopyUrl:(NSString *)url width:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(url:width:height:)")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson.Companion")))
@interface SharedInstagramImageJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramImageJson *)empty __attribute__((swift_name("empty()")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson.$serializer")))
@interface SharedInstagramImageJson$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramImageJson *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramImageJson *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramImageJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramImageJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto")))
@interface SharedInstagramPhoto : KotlinBase
- (instancetype)initWithPhotoId:(NSString *)photoId link:(NSString *)link thumbnailUrl:(NSString *)thumbnailUrl fullsizeUrl:(NSString *)fullsizeUrl __attribute__((swift_name("init(photoId:link:thumbnailUrl:fullsizeUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedInstagramPhoto *)doCopyPhotoId:(NSString *)photoId link:(NSString *)link thumbnailUrl:(NSString *)thumbnailUrl fullsizeUrl:(NSString *)fullsizeUrl __attribute__((swift_name("doCopy(photoId:link:thumbnailUrl:fullsizeUrl:)")));
@property (readonly) NSString *photoId __attribute__((swift_name("photoId")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@property (readonly) NSString *thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) NSString *fullsizeUrl __attribute__((swift_name("fullsizeUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto.Companion")))
@interface SharedInstagramPhotoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedInstagramPhoto *)fromJsonMedia:(SharedInstagramMediaJson *)media __attribute__((swift_name("fromJson(media:)")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto.$serializer")))
@interface SharedInstagramPhoto$serializer : KotlinBase <SharedKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedInstagramPhoto *)deserializeDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedInstagramPhoto *)patchDecoder:(id<SharedKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedInstagramPhoto *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedInstagramPhoto *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotosRepository")))
@interface SharedPhotosRepository : KotlinBase
- (instancetype)initWithApi:(SharedApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
- (void)loadFakeResultCallback:(SharedKotlinUnit *(^)(NSString *))callback __attribute__((swift_name("loadFakeResult(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtensionsKt")))
@interface SharedStringExtensionsKt : KotlinBase
@property (class, readonly) NSString *emptyString __attribute__((swift_name("emptyString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol SharedKotlinx_serialization_runtime_nativeEncoder
@required
- (id<SharedKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SharedKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SharedKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SharedKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(SharedKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol SharedKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SharedKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_runtime_nativeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol SharedKotlinx_serialization_runtime_nativeDecoder
@required
- (id<SharedKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SharedKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(SharedKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol SharedKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface SharedKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <SharedKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SharedKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<SharedKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<SharedKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface SharedKotlinx_serialization_runtime_nativeEnumDescriptor : SharedKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(SharedKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SharedKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModule")))
@protocol SharedKotlinx_serialization_runtime_nativeSerialModule
@required
- (void)dumpToCollector:(id<SharedKotlinx_serialization_runtime_nativeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getContextualKclass:(id<SharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface SharedKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol SharedKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SharedKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SharedKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface SharedKotlinx_serialization_runtime_nativeUpdateMode : SharedKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_runtime_nativeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedKotlinx_serialization_runtime_nativeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedKotlinx_serialization_runtime_nativeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModuleCollector")))
@protocol SharedKotlinx_serialization_runtime_nativeSerialModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_runtime_nativeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
