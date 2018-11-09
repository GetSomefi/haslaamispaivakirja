// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment;}

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment :141
// {
::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment_typeof();
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__ctor_1_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__GetAsObject_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__get_Name_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this, ::g::Uno::UX::Selector* __retval);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__New1_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment** __retval);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__get_PropertyType_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this, uType** __retval);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__SetAsObject_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* __this, bool* __retval);

struct Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment_typeof()->Init(), _name_; }

    void ctor_1();
    static Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment* New1();
};
// }

} // ::g
