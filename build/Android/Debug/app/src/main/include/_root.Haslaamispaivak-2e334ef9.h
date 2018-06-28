// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_ListItem_RealLabel_Property;}
namespace g{struct ListItem;}

namespace g{

// internal sealed class Haslaamispaivakirja_ListItem_RealLabel_Property :164
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_ListItem_RealLabel_Property_typeof();
void Haslaamispaivakirja_ListItem_RealLabel_Property__ctor_3_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::ListItem* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_ListItem_RealLabel_Property__Get1_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_ListItem_RealLabel_Property__New1_fn(::g::ListItem* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_ListItem_RealLabel_Property** __retval);
void Haslaamispaivakirja_ListItem_RealLabel_Property__get_Object_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_ListItem_RealLabel_Property__Set1_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void Haslaamispaivakirja_ListItem_RealLabel_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_ListItem_RealLabel_Property* __this, bool* __retval);

struct Haslaamispaivakirja_ListItem_RealLabel_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ListItem*> _obj;

    void ctor_3(::g::ListItem* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_ListItem_RealLabel_Property* New1(::g::ListItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
