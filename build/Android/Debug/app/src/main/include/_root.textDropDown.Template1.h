// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct textDropDown;}
namespace g{struct textDropDown__Template1;}

namespace g{

// public partial sealed class textDropDown.Template1 :102
// {
::g::Uno::UX::Template_type* textDropDown__Template1_typeof();
void textDropDown__Template1__ctor_1_fn(textDropDown__Template1* __this, ::g::textDropDown* parent, ::g::textDropDown* parentInstance);
void textDropDown__Template1__New1_fn(textDropDown__Template1* __this, uObject** __retval);
void textDropDown__Template1__New2_fn(::g::textDropDown* parent, ::g::textDropDown* parentInstance, textDropDown__Template1** __retval);

struct textDropDown__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::textDropDown*> __parent1;
    uWeak< ::g::textDropDown*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> this1_Send_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Send_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_DataKey_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb23;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb24;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return textDropDown__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return textDropDown__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return textDropDown__Template1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return textDropDown__Template1_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return textDropDown__Template1_typeof()->Init(), __selector4_; }

    void ctor_1(::g::textDropDown* parent, ::g::textDropDown* parentInstance);
    static textDropDown__Template1* New2(::g::textDropDown* parent, ::g::textDropDown* parentInstance);
};
// }

} // ::g
