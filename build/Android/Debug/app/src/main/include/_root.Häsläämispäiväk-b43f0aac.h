// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Häsläämispäiväkirja_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseControlsShape_Color_Property :90
// {
::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseControlsShape_Color_Property_typeof();
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__ctor_3_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__Get1_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseControlsShape_Color_Property** __retval);
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_Object_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__Set1_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, bool* __retval);

struct Häsläämispäiväkirja_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static Häsläämispäiväkirja_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
