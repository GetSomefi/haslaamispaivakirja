// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown_toimimaton.g.uno'.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct textDropDown_toimimaton;}

namespace g{

// public partial sealed class textDropDown_toimimaton :2
// {
::g::Fuse::Controls::Panel_type* textDropDown_toimimaton_typeof();
void textDropDown_toimimaton__get_dropDownList_fn(textDropDown_toimimaton* __this, uObject** __retval);
void textDropDown_toimimaton__set_dropDownList_fn(textDropDown_toimimaton* __this, uObject* value);
void textDropDown_toimimaton__get_Send_fn(textDropDown_toimimaton* __this, uString** __retval);
void textDropDown_toimimaton__set_Send_fn(textDropDown_toimimaton* __this, uString* value);
void textDropDown_toimimaton__SetdropDownList_fn(textDropDown_toimimaton* __this, uObject* value, uObject* origin);
void textDropDown_toimimaton__SetSend_fn(textDropDown_toimimaton* __this, uString* value, uObject* origin);

struct textDropDown_toimimaton : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _field_dropDownList;
    uStrong<uString*> _field_Send;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return textDropDown_toimimaton_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return textDropDown_toimimaton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return textDropDown_toimimaton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return textDropDown_toimimaton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return textDropDown_toimimaton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return textDropDown_toimimaton_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return textDropDown_toimimaton_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return textDropDown_toimimaton_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return textDropDown_toimimaton_typeof()->Init(), __selector7_; }

    uObject* dropDownList();
    void dropDownList(uObject* value);
    uString* Send();
    void Send(uString* value);
    void SetdropDownList(uObject* value, uObject* origin);
    void SetSend(uString* value, uObject* origin);
};
// }

} // ::g
