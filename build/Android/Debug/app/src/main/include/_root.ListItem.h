// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/ListItem.g.uno'.
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
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListItem;}

namespace g{

// public partial sealed class ListItem :2
// {
::g::Fuse::Controls::Panel_type* ListItem_typeof();
void ListItem__ctor_7_fn(ListItem* __this);
void ListItem__InitializeUX_fn(ListItem* __this);
void ListItem__New4_fn(ListItem** __retval);
void ListItem__get_RealLabel_fn(ListItem* __this, uString** __retval);
void ListItem__set_RealLabel_fn(ListItem* __this, uString* value);
void ListItem__SetRealLabel_fn(ListItem* __this, uString* value, uObject* origin);
void ListItem__SetTheValue_fn(ListItem* __this, uString* value, uObject* origin);
void ListItem__get_TheValue_fn(ListItem* __this, uString** __retval);
void ListItem__set_TheValue_fn(ListItem* __this, uString* value);

struct ListItem : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_TheValue;
    uStrong<uString*> _field_RealLabel;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_TheValue_inst;
    uStrong< ::g::Uno::UX::Property1*> this_RealLabel_inst;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListItem_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListItem_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListItem_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListItem_typeof()->Init(), __selector3_; }

    void ctor_7();
    void InitializeUX();
    uString* RealLabel();
    void RealLabel(uString* value);
    void SetRealLabel(uString* value, uObject* origin);
    void SetTheValue(uString* value, uObject* origin);
    uString* TheValue();
    void TheValue(uString* value);
    static ListItem* New4();
};
// }

} // ::g