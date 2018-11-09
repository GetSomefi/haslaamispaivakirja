// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlyingDock.h>
#include <_root.Haslaamispaivak-bb9c6d74.h>
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

// internal sealed class Haslaamispaivakirja_accessor_FlyingDock_title :101
// {
// static generated Haslaamispaivakirja_accessor_FlyingDock_title() :101
static void Haslaamispaivakirja_accessor_FlyingDock_title__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_FlyingDock_title::Singleton_ = Haslaamispaivakirja_accessor_FlyingDock_title::New1();
    Haslaamispaivakirja_accessor_FlyingDock_title::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"title"*/]);
}

static void Haslaamispaivakirja_accessor_FlyingDock_title_build(uType* type)
{
    ::STRINGS[0] = uString::Const("title");
    ::TYPES[0] = ::g::FlyingDock_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_FlyingDock_title::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_FlyingDock_title::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_FlyingDock_title_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_FlyingDock_title);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_FlyingDock_title", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_FlyingDock_title_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_FlyingDock_title__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_FlyingDock_title__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_FlyingDock_title__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_FlyingDock_title__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_FlyingDock_title__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_FlyingDock_title__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_FlyingDock_title__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_FlyingDock_title() :101
void Haslaamispaivakirja_accessor_FlyingDock_title__ctor_1_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :107
void Haslaamispaivakirja_accessor_FlyingDock_title__GetAsObject_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::FlyingDock*>(obj, ::TYPES[0/*FlyingDock*/]))->title(), void();
}

// public override sealed Uno.UX.Selector get_Name() :104
void Haslaamispaivakirja_accessor_FlyingDock_title__get_Name_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_FlyingDock_title::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_FlyingDock_title New() :101
void Haslaamispaivakirja_accessor_FlyingDock_title__New1_fn(Haslaamispaivakirja_accessor_FlyingDock_title** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_FlyingDock_title::New1();
}

// public override sealed Uno.Type get_PropertyType() :106
void Haslaamispaivakirja_accessor_FlyingDock_title__get_PropertyType_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :108
void Haslaamispaivakirja_accessor_FlyingDock_title__SetAsObject_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::FlyingDock*>(obj, ::TYPES[0/*FlyingDock*/]))->Settitle(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :109
void Haslaamispaivakirja_accessor_FlyingDock_title__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_FlyingDock_title* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_FlyingDock_title::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_FlyingDock_title::_name_;

// public generated Haslaamispaivakirja_accessor_FlyingDock_title() [instance] :101
void Haslaamispaivakirja_accessor_FlyingDock_title::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_FlyingDock_title New() [static] :101
Haslaamispaivakirja_accessor_FlyingDock_title* Haslaamispaivakirja_accessor_FlyingDock_title::New1()
{
    Haslaamispaivakirja_accessor_FlyingDock_title* obj1 = (Haslaamispaivakirja_accessor_FlyingDock_title*)uNew(Haslaamispaivakirja_accessor_FlyingDock_title_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
