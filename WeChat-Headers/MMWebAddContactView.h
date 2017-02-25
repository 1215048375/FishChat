//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "PBMessageObserverDelegate.h"

@class CContact, JSEvent, MMLoadingView, NSString, UIButton, UIImageView;

@interface MMWebAddContactView : MMUIView <PBMessageObserverDelegate>
{
    NSString *m_nsUsrName;
    JSEvent *m_nsCallBack;
    id <WebAddContactDelegate> m_delegate;
    int m_scene;
    MMLoadingView *m_loadingView;
    UIButton *m_btnConfirm;
    UIButton *m_btnCancel;
    UIButton *m_btnRetry;
    UIButton *m_btnAdd;
    UIImageView *m_backgroundView;
    CContact *m_oContact;
}

@property(nonatomic) int m_scene; // @synthesize m_scene;
@property(nonatomic) __weak id <WebAddContactDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleContact:(id)arg1;
- (void)CreateVerify;
- (void)CreateSearch;
- (void)OnAddOk;
- (void)OnConfirm;
- (void)OnAdd;
- (void)OnCancel;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)UpdateView:(unsigned int)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 CallBack:(id)arg2;

@end
