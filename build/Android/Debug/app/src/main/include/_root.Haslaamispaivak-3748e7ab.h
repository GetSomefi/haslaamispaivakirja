// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_textDropDown_SendName_Property;}
namespace g{struct textDropDown;}

namespace g{

// internal sealed class Haslaamispaivakirja_textDropDown_SendName_Property :368
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_textDropDown_SendName_Property_typeof();
void Haslaamispaivakirja_textDropDown_SendName_Property__ctor_3_fn(Haslaamispaivakirja_textDropDown_SendName_Property* __this, ::g::textDropDown* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_textDropDown_SendName_Property__Get1_fn(Haslaamispaivakirja_textDropDown_SendName_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_textDropDown_SendName_Property__New1_fn(::g::textDropDown* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_textDropDown_SendName_Property** __retval);
void Haslaamispaivakirja_textDropDown_SendName_Property__get_Object_fn(Haslaamispaivakirja_textDropDown_SendName_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_textDropDown_SendName_Property__Set1_fn(Haslaamispaivakirja_textDropDown_SendName_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void Haslaamispaivakirja_textDropDown_SendName_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_textDropDown_SendName_Property* __this, bool* __retval);

struct Haslaamispaivakirja_textDropDown_SendName_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::textDropDown*> _obj;

    void ctor_3(::g::textDropDown* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_textDropDown_SendName_Property* New1(::g::textDropDown* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g