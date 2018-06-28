// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Häsläämispäiväk-b43f0aac.h>
#include <Fuse.Controls.Shape.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseControlsShape_Color_Property :90
// {
static void Häsläämispäiväkirja_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shape*/], offsetof(Häsläämispäiväkirja_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Häsläämispäiväkirja_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Häsläämispäiväkirja_FuseControlsShape_Color_Property", options);
    type->fp_build_ = Häsläämispäiväkirja_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Häsläämispäiväkirja_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Häsläämispäiväkirja_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Häsläämispäiväkirja_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :93
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__ctor_3_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :95
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__Get1_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public Häsläämispäiväkirja_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :93
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseControlsShape_Color_Property** __retval)
{
    *__retval = Häsläämispäiväkirja_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :94
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_Object_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :96
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__Set1_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :97
void Häsläämispäiväkirja_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(Häsläämispäiväkirja_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Häsläämispäiväkirja_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :93
void Häsläämispäiväkirja_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Häsläämispäiväkirja_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :93
Häsläämispäiväkirja_FuseControlsShape_Color_Property* Häsläämispäiväkirja_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    Häsläämispäiväkirja_FuseControlsShape_Color_Property* obj1 = (Häsläämispäiväkirja_FuseControlsShape_Color_Property*)uNew(Häsläämispäiväkirja_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
