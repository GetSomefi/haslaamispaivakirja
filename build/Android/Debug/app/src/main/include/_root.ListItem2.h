// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/ListItem2.g.uno'.
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
namespace g{struct ListItem2;}

namespace g{

// public partial sealed class ListItem2 :2
// {
::g::Fuse::Controls::Panel_type* ListItem2_typeof();
void ListItem2__get_RealLabel_fn(ListItem2* __this, uString** __retval);
void ListItem2__set_RealLabel_fn(ListItem2* __this, uString* value);
void ListItem2__SetRealLabel_fn(ListItem2* __this, uString* value, uObject* origin);
void ListItem2__SetTheValue_fn(ListItem2* __this, uString* value, uObject* origin);
void ListItem2__get_TheValue_fn(ListItem2* __this, uString** __retval);
void ListItem2__set_TheValue_fn(ListItem2* __this, uString* value);

struct ListItem2 : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_TheValue;
    uStrong<uString*> _field_RealLabel;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListItem2_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListItem2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListItem2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListItem2_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListItem2_typeof()->Init(), __selector3_; }

    uString* RealLabel();
    void RealLabel(uString* value);
    void SetRealLabel(uString* value, uObject* origin);
    void SetTheValue(uString* value, uObject* origin);
    uString* TheValue();
    void TheValue(uString* value);
};
// }

} // ::g
