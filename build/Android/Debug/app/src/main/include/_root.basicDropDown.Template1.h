// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basicDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct basicDropDown__Template1;}

namespace g{

// public partial sealed class basicDropDown.Template1 :41
// {
::g::Uno::UX::Template_type* basicDropDown__Template1_typeof();
void basicDropDown__Template1__New1_fn(basicDropDown__Template1* __this, uObject** __retval);

struct basicDropDown__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_DataKey_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb20;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return basicDropDown__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return basicDropDown__Template1_typeof()->Init(), __selector1_; }
};
// }

} // ::g
