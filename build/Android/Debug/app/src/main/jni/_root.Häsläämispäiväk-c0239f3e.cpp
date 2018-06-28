// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Häsläämispäiväk-c0239f3e.h>
#include <Fuse.Animations.Change-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property :99
// {
static void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Animations.Change<float4>*/], offsetof(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property", options);
    type->fp_build_ = Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__Set1_fn;
    return type;
}

// public Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :102
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__ctor_3_fn(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :104
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__Get1_fn(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[0/*Fuse.Animations.Change<float4>*/])), &ret2), ret2), void();
}

// public Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :102
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property** __retval)
{
    *__retval = Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :103
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :105
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property__Set1_fn(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[0/*Fuse.Animations.Change<float4>*/])), uCRef(v_));
}

// public Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [instance] :102
void Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property::ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [static] :102
Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property::New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property* obj1 = (Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property*)uNew(Häsläämispäiväkirja_FuseAnimationsChangefloat4_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
