// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggle.h>
#include <_root.Haslaamispaivak-872d924b.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor :21
// {
// static generated Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor() :21
static void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::Singleton_ = Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::New1();
    Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"SecondaryCo...*/]);
}

static void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SecondaryColor");
    ::TYPES[0] = ::g::BasicSwipeToggle_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor() :21
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__ctor_1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__GetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::BasicSwipeToggle*>(obj, ::TYPES[0/*BasicSwipeToggle*/]))->SecondaryColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_Name_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor New() :21
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__New1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_PropertyType_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__SetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::BasicSwipeToggle*>(obj, ::TYPES[0/*BasicSwipeToggle*/]))->SetSecondaryColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::_name_;

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor() [instance] :21
void Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor New() [static] :21
Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::New1()
{
    Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor* obj1 = (Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor*)uNew(Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
