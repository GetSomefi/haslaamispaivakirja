// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseControlsShape_Color_Property :474
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseControlsShape_Color_Property_typeof();
void Haslaamispaivakirja_FuseControlsShape_Color_Property__ctor_3_fn(Haslaamispaivakirja_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseControlsShape_Color_Property__Get1_fn(Haslaamispaivakirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void Haslaamispaivakirja_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseControlsShape_Color_Property** __retval);
void Haslaamispaivakirja_FuseControlsShape_Color_Property__get_Object_fn(Haslaamispaivakirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseControlsShape_Color_Property__Set1_fn(Haslaamispaivakirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void Haslaamispaivakirja_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_FuseControlsShape_Color_Property* __this, bool* __retval);

struct Haslaamispaivakirja_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
