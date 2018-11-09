// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseControlsTextControl_Color_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseControlsTextControl_Color_Property :542
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseControlsTextControl_Color_Property_typeof();
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__ctor_3_fn(Haslaamispaivakirja_FuseControlsTextControl_Color_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__Get1_fn(Haslaamispaivakirja_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseControlsTextControl_Color_Property** __retval);
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__get_Object_fn(Haslaamispaivakirja_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__Set1_fn(Haslaamispaivakirja_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void Haslaamispaivakirja_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_FuseControlsTextControl_Color_Property* __this, bool* __retval);

struct Haslaamispaivakirja_FuseControlsTextControl_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseControlsTextControl_Color_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
