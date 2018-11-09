// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct fa_times;}
namespace g{struct textDropDown;}

namespace g{

// public partial sealed class textDropDown :2
// {
::g::Fuse::Controls::Panel_type* textDropDown_typeof();
void textDropDown__ctor_7_fn(textDropDown* __this);
void textDropDown__get_dropDownList_fn(textDropDown* __this, uObject** __retval);
void textDropDown__set_dropDownList_fn(textDropDown* __this, uObject* value);
void textDropDown__InitializeUX_fn(textDropDown* __this);
void textDropDown__get_Name1_fn(textDropDown* __this, uString** __retval);
void textDropDown__set_Name1_fn(textDropDown* __this, uString* value);
void textDropDown__New4_fn(textDropDown** __retval);
void textDropDown__get_Send_fn(textDropDown* __this, uString** __retval);
void textDropDown__set_Send_fn(textDropDown* __this, uString* value);
void textDropDown__get_SendName_fn(textDropDown* __this, uString** __retval);
void textDropDown__set_SendName_fn(textDropDown* __this, uString* value);
void textDropDown__SetdropDownList_fn(textDropDown* __this, uObject* value, uObject* origin);
void textDropDown__SetName_fn(textDropDown* __this, uString* value, uObject* origin);
void textDropDown__SetSend_fn(textDropDown* __this, uString* value, uObject* origin);
void textDropDown__SetSendName_fn(textDropDown* __this, uString* value, uObject* origin);
void textDropDown__SetValue_fn(textDropDown* __this, uString* value, uObject* origin);
void textDropDown__get_Value_fn(textDropDown* __this, uString** __retval);
void textDropDown__set_Value_fn(textDropDown* __this, uString* value);

struct textDropDown : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _field_dropDownList;
    uStrong<uString*> _field_Send;
    uStrong<uString*> _field_SendName;
    uStrong<uString*> _field_Value;
    uStrong<uString*> _field_Name;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_DataKey_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> DropDownShow_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> DropDownShow_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_dropDownList_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Send_inst;
    uStrong< ::g::Uno::UX::Property1*> this_SendName_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Name_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;
    uStrong< ::g::Fuse::Controls::StackPanel*> DropDownShow;
    uStrong< ::g::Fuse::Controls::StackPanel*> DropDownTheList;
    uStrong< ::g::fa_times*> closeDropDown;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb22;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return textDropDown_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return textDropDown_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return textDropDown_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return textDropDown_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return textDropDown_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return textDropDown_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return textDropDown_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return textDropDown_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return textDropDown_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return textDropDown_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return textDropDown_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return textDropDown_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return textDropDown_typeof()->Init(), __selector11_; }

    void ctor_7();
    uObject* dropDownList();
    void dropDownList(uObject* value);
    void InitializeUX();
    uString* Name1();
    void Name1(uString* value);
    uString* Send();
    void Send(uString* value);
    uString* SendName();
    void SendName(uString* value);
    void SetdropDownList(uObject* value, uObject* origin);
    void SetName(uString* value, uObject* origin);
    void SetSend(uString* value, uObject* origin);
    void SetSendName(uString* value, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    uString* Value();
    void Value(uString* value);
    static textDropDown* New4();
};
// }

} // ::g
