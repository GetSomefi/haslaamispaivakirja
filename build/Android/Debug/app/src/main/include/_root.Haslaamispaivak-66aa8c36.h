// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseSelectionSelectable_Value_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseSelectionSelectable_Value_Property :635
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseSelectionSelectable_Value_Property_typeof();
void Haslaamispaivakirja_FuseSelectionSelectable_Value_Property__ctor_3_fn(Haslaamispaivakirja_FuseSelectionSelectable_Value_Property* __this, ::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseSelectionSelectable_Value_Property__Get1_fn(Haslaamispaivakirja_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_FuseSelectionSelectable_Value_Property__New1_fn(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseSelectionSelectable_Value_Property** __retval);
void Haslaamispaivakirja_FuseSelectionSelectable_Value_Property__get_Object_fn(Haslaamispaivakirja_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseSelectionSelectable_Value_Property__Set1_fn(Haslaamispaivakirja_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct Haslaamispaivakirja_FuseSelectionSelectable_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Selection::Selectable*> _obj;

    void ctor_3(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseSelectionSelectable_Value_Property* New1(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
