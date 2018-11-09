// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseControlsControl_Background_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseControlsControl_Background_Property :627
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseControlsControl_Background_Property_typeof();
void Haslaamispaivakirja_FuseControlsControl_Background_Property__ctor_3_fn(Haslaamispaivakirja_FuseControlsControl_Background_Property* __this, ::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseControlsControl_Background_Property__Get1_fn(Haslaamispaivakirja_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval);
void Haslaamispaivakirja_FuseControlsControl_Background_Property__New1_fn(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseControlsControl_Background_Property** __retval);
void Haslaamispaivakirja_FuseControlsControl_Background_Property__get_Object_fn(Haslaamispaivakirja_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseControlsControl_Background_Property__Set1_fn(Haslaamispaivakirja_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct Haslaamispaivakirja_FuseControlsControl_Background_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Control*> _obj;

    void ctor_3(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseControlsControl_Background_Property* New1(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
