// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace basicBtn{struct Button;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_basicBtnButton_Text_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_basicBtnButton_Text_Property :146
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_basicBtnButton_Text_Property_typeof();
void Haslaamispaivakirja_basicBtnButton_Text_Property__ctor_3_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::basicBtn::Button* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_basicBtnButton_Text_Property__Get1_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_basicBtnButton_Text_Property__New1_fn(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_basicBtnButton_Text_Property** __retval);
void Haslaamispaivakirja_basicBtnButton_Text_Property__get_Object_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_basicBtnButton_Text_Property__Set1_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void Haslaamispaivakirja_basicBtnButton_Text_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_basicBtnButton_Text_Property* __this, bool* __retval);

struct Haslaamispaivakirja_basicBtnButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::basicBtn::Button*> _obj;

    void ctor_3(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_basicBtnButton_Text_Property* New1(::g::basicBtn::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
