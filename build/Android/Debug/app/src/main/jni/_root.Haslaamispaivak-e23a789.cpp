// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-e23a789.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property :199
// {
static void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/], offsetof(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property", options);
    type->fp_build_ = Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__Set1_fn;
    return type;
}

// public Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) :202
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__ctor_3_fn(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :204
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__Get1_fn(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::Actions::TriggerAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/]))->IsActive(), void();
}

// public Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) :202
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property** __retval)
{
    *__retval = Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :203
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__get_Object_fn(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :205
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property__Set1_fn(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::Actions::TriggerAction*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.TriggerAction*/]))->IsActive(v_);
}

// public Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) [instance] :202
void Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property::ctor_3(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj, Uno.UX.Selector name) [static] :202
Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property::New1(::g::Fuse::Triggers::Actions::TriggerAction* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property* obj1 = (Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property*)uNew(Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
