// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-7dc7b714.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property :216
// {
static void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], offsetof(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property", options);
    type->fp_build_ = Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__Set1_fn;
    return type;
}

// public Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property(Fuse.Triggers.Actions.Set<bool> obj, Uno.UX.Selector name) :219
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__ctor_3_fn(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :221
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__Get1_fn(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Fuse::Triggers::Actions::Set__get_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::Actions::Set*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/])), &ret2), ret2), void();
}

// public Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property New(Fuse.Triggers.Actions.Set<bool> obj, Uno.UX.Selector name) :219
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property** __retval)
{
    *__retval = Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :220
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__get_Object_fn(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :222
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property__Set1_fn(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::Actions::Set*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/])), uCRef(v_));
}

// public Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property(Fuse.Triggers.Actions.Set<bool> obj, Uno.UX.Selector name) [instance] :219
void Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property::ctor_3(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property New(Fuse.Triggers.Actions.Set<bool> obj, Uno.UX.Selector name) [static] :219
Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property::New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property* obj1 = (Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property*)uNew(Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
