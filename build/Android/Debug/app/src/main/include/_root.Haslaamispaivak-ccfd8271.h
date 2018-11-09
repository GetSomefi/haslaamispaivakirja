// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace listBtn{struct Button;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_listBtnButton_DataKey_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_listBtnButton_DataKey_Property :602
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_listBtnButton_DataKey_Property_typeof();
void Haslaamispaivakirja_listBtnButton_DataKey_Property__ctor_3_fn(Haslaamispaivakirja_listBtnButton_DataKey_Property* __this, ::g::listBtn::Button* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_listBtnButton_DataKey_Property__Get1_fn(Haslaamispaivakirja_listBtnButton_DataKey_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_listBtnButton_DataKey_Property__New1_fn(::g::listBtn::Button* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_listBtnButton_DataKey_Property** __retval);
void Haslaamispaivakirja_listBtnButton_DataKey_Property__get_Object_fn(Haslaamispaivakirja_listBtnButton_DataKey_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_listBtnButton_DataKey_Property__Set1_fn(Haslaamispaivakirja_listBtnButton_DataKey_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void Haslaamispaivakirja_listBtnButton_DataKey_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_listBtnButton_DataKey_Property* __this, bool* __retval);

struct Haslaamispaivakirja_listBtnButton_DataKey_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::listBtn::Button*> _obj;

    void ctor_3(::g::listBtn::Button* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_listBtnButton_DataKey_Property* New1(::g::listBtn::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
