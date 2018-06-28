// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBig.h>
#include <_root.Haslaamispaivak-807639a3.h>
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

// internal sealed class Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor :51
// {
// static generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor() :51
static void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::Singleton_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::New1();
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"SecondaryCo...*/]);
}

static void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SecondaryColor");
    ::TYPES[0] = ::g::BasicSwipeToggleBig_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor() :51
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__ctor_1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :57
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__GetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->SecondaryColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :54
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_Name_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor New() :51
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__New1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :56
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_PropertyType_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :58
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__SetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->SetSecondaryColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :59
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::_name_;

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor() [instance] :51
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor New() [static] :51
Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor::New1()
{
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor* obj1 = (Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor*)uNew(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_SecondaryColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
