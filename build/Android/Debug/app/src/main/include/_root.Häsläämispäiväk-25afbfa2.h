// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property;}

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property :107
// {
::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property_typeof();
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__ctor_3_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name);
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Get1_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property** __retval);
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__get_Object_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Set1_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Actions::TriggerAction*> _obj;

    void ctor_3(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name);
    static Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* New1(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
