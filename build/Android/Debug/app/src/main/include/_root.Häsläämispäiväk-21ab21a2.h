// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property;}

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property :115
// {
::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property_typeof();
void Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property__ctor_3_fn(Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property__Get1_fn(Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property** __retval);
void Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property__get_Object_fn(Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property__Set1_fn(Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static Häsläämispäiväkirja_FuseControlsTextControl_FontSize_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
