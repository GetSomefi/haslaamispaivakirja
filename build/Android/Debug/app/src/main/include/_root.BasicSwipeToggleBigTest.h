// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/BasicSwipeToggleBigTest.g.uno'.
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
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BasicSwipeToggleBigTest;}

namespace g{

// public partial sealed class BasicSwipeToggleBigTest :2
// {
::g::Fuse::Controls::Panel_type* BasicSwipeToggleBigTest_typeof();
void BasicSwipeToggleBigTest__get_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* __retval);
void BasicSwipeToggleBigTest__set_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* value);
void BasicSwipeToggleBigTest__get_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval);
void BasicSwipeToggleBigTest__set_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value);
void BasicSwipeToggleBigTest__get_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval);
void BasicSwipeToggleBigTest__set_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value);
void BasicSwipeToggleBigTest__get_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* __retval);
void BasicSwipeToggleBigTest__set_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* value);
void BasicSwipeToggleBigTest__SetIsActive_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin);
void BasicSwipeToggleBigTest__SetPrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin);
void BasicSwipeToggleBigTest__SetSecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin);
void BasicSwipeToggleBigTest__SetSendable_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin);

struct BasicSwipeToggleBigTest : ::g::Fuse::Controls::Panel
{
    bool _field_Sendable;
    ::g::Uno::Float4 _field_PrimaryColor;
    ::g::Uno::Float4 _field_SecondaryColor;
    bool _field_IsActive;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return BasicSwipeToggleBigTest_typeof()->Init(), __selector6_; }

    bool IsActive();
    void IsActive(bool value);
    ::g::Uno::Float4 PrimaryColor();
    void PrimaryColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 SecondaryColor();
    void SecondaryColor(::g::Uno::Float4 value);
    bool Sendable();
    void Sendable(bool value);
    void SetIsActive(bool value, uObject* origin);
    void SetPrimaryColor(::g::Uno::Float4 value, uObject* origin);
    void SetSecondaryColor(::g::Uno::Float4 value, uObject* origin);
    void SetSendable(bool value, uObject* origin);
};
// }

} // ::g
