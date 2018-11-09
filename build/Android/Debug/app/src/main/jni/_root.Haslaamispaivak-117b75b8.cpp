// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-117b75b8.h>
#include <basic.TextBoxFakeDropDown.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value :131
// {
// static generated Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value() :131
static void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::Singleton_ = Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::New1();
    Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::TYPES[0] = ::g::basic::TextBoxFakeDropDown_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value() :131
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__ctor_1_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :137
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__GetAsObject_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::basic::TextBoxFakeDropDown*>(obj, ::TYPES[0/*basic.TextBoxFakeDropDown*/]))->Value(), void();
}

// public override sealed Uno.UX.Selector get_Name() :134
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_Name_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value New() :131
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__New1_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :136
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_PropertyType_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :138
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__SetAsObject_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::basic::TextBoxFakeDropDown*>(obj, ::TYPES[0/*basic.TextBoxFakeDropDown*/]))->SetValue(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :139
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::_name_;

// public generated Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value() [instance] :131
void Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value New() [static] :131
Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::New1()
{
    Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value* obj1 = (Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value*)uNew(Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
