// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/BasicSwipeToggleBig.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Callback;}}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BasicSwipeToggleBig;}

namespace g{

// public partial sealed class BasicSwipeToggleBig :2
// {
::g::Fuse::Controls::Panel_type* BasicSwipeToggleBig_typeof();
void BasicSwipeToggleBig__ctor_7_fn(BasicSwipeToggleBig* __this);
void BasicSwipeToggleBig__InitializeUX_fn(BasicSwipeToggleBig* __this);
void BasicSwipeToggleBig__get_IsActive_fn(BasicSwipeToggleBig* __this, bool* __retval);
void BasicSwipeToggleBig__set_IsActive_fn(BasicSwipeToggleBig* __this, bool* value);
void BasicSwipeToggleBig__New4_fn(BasicSwipeToggleBig** __retval);
void BasicSwipeToggleBig__get_Opacity1_fn(BasicSwipeToggleBig* __this, float* __retval);
void BasicSwipeToggleBig__set_Opacity1_fn(BasicSwipeToggleBig* __this, float* value);
void BasicSwipeToggleBig__get_PrimaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* __retval);
void BasicSwipeToggleBig__set_PrimaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* value);
void BasicSwipeToggleBig__get_SecondaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* __retval);
void BasicSwipeToggleBig__set_SecondaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* value);
void BasicSwipeToggleBig__get_Sendable_fn(BasicSwipeToggleBig* __this, bool* __retval);
void BasicSwipeToggleBig__set_Sendable_fn(BasicSwipeToggleBig* __this, bool* value);
void BasicSwipeToggleBig__SetIsActive_fn(BasicSwipeToggleBig* __this, bool* value, uObject* origin);
void BasicSwipeToggleBig__SetOpacity1_fn(BasicSwipeToggleBig* __this, float* value, uObject* origin);
void BasicSwipeToggleBig__SetPrimaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* value, uObject* origin);
void BasicSwipeToggleBig__SetSecondaryColor_fn(BasicSwipeToggleBig* __this, ::g::Uno::Float4* value, uObject* origin);
void BasicSwipeToggleBig__SetSendable_fn(BasicSwipeToggleBig* __this, bool* value, uObject* origin);
void BasicSwipeToggleBig__SetWidth_fn(BasicSwipeToggleBig* __this, float* value, uObject* origin);
void BasicSwipeToggleBig__get_Width1_fn(BasicSwipeToggleBig* __this, float* __retval);
void BasicSwipeToggleBig__set_Width1_fn(BasicSwipeToggleBig* __this, float* value);

struct BasicSwipeToggleBig : ::g::Fuse::Controls::Panel
{
    bool _field_Sendable;
    ::g::Uno::Float4 _field_PrimaryColor;
    ::g::Uno::Float4 _field_SecondaryColor;
    float _field_Opacity;
    float _field_Width;
    bool _field_IsActive;
    uStrong< ::g::Uno::UX::Property1*> swipe_IsActive_inst;
    uStrong< ::g::Uno::UX::Property1*> handle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> background_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Sendable_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> background_Width_inst;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> swipe;
    uStrong< ::g::Fuse::Triggers::Actions::Callback*> TheClick;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Fuse::Triggers::Actions::Callback*> TheSwipe;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::Fuse::Controls::Rectangle*> handle;
    uStrong< ::g::Fuse::Controls::Rectangle*> background;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BasicSwipeToggleBig_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BasicSwipeToggleBig_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return BasicSwipeToggleBig_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return BasicSwipeToggleBig_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return BasicSwipeToggleBig_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return BasicSwipeToggleBig_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return BasicSwipeToggleBig_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return BasicSwipeToggleBig_typeof()->Init(), __selector7_; }

    void ctor_7();
    void InitializeUX();
    bool IsActive();
    void IsActive(bool value);
    float Opacity1();
    void Opacity1(float value);
    ::g::Uno::Float4 PrimaryColor();
    void PrimaryColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 SecondaryColor();
    void SecondaryColor(::g::Uno::Float4 value);
    bool Sendable();
    void Sendable(bool value);
    void SetIsActive(bool value, uObject* origin);
    void SetOpacity1(float value, uObject* origin);
    void SetPrimaryColor(::g::Uno::Float4 value, uObject* origin);
    void SetSecondaryColor(::g::Uno::Float4 value, uObject* origin);
    void SetSendable(bool value, uObject* origin);
    void SetWidth(float value, uObject* origin);
    float Width1();
    void Width1(float value);
    static BasicSwipeToggleBig* New4();
};
// }

} // ::g
