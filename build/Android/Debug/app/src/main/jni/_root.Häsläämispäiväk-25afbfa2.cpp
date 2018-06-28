// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Häsläämispäiväk-25afbfa2.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property :107
// {
static void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/], offsetof(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property", options);
    type->fp_build_ = Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Set1_fn;
    return type;
}

// public Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) :110
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__ctor_3_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :112
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Get1_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::Actions::TriggerAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/]))->IsActive(), void();
}

// public Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) :110
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property** __retval)
{
    *__retval = Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :111
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__get_Object_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :113
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property__Set1_fn(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::Actions::TriggerAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/]))->IsActive(v_);
}

// public Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) [instance] :110
void Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property::ctor_3(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) [static] :110
Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property::New1(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name)
{
    Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property* obj1 = (Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property*)uNew(Häsläämispäiväkirja_FuseTriggersActionsTriggerAction_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
