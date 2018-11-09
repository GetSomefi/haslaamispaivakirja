// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bgImage.h>
#include <_root.Haslaamispaivak-265a52be.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_bgImage_File :201
// {
// static generated Haslaamispaivakirja_accessor_bgImage_File() :201
static void Haslaamispaivakirja_accessor_bgImage_File__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_bgImage_File::Singleton_ = Haslaamispaivakirja_accessor_bgImage_File::New1();
    Haslaamispaivakirja_accessor_bgImage_File::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"File"*/]);
}

static void Haslaamispaivakirja_accessor_bgImage_File_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::TYPES[0] = ::g::bgImage_typeof();
    ::TYPES[1] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_bgImage_File::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_bgImage_File::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_bgImage_File_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_bgImage_File);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_bgImage_File", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_bgImage_File_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_bgImage_File__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_bgImage_File__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_bgImage_File__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_bgImage_File__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_bgImage_File__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_bgImage_File__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_bgImage_File__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_bgImage_File() :201
void Haslaamispaivakirja_accessor_bgImage_File__ctor_1_fn(Haslaamispaivakirja_accessor_bgImage_File* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :207
void Haslaamispaivakirja_accessor_bgImage_File__GetAsObject_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::bgImage*>(obj, ::TYPES[0/*bgImage*/]))->File(), void();
}

// public override sealed Uno.UX.Selector get_Name() :204
void Haslaamispaivakirja_accessor_bgImage_File__get_Name_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_bgImage_File::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_bgImage_File New() :201
void Haslaamispaivakirja_accessor_bgImage_File__New1_fn(Haslaamispaivakirja_accessor_bgImage_File** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_bgImage_File::New1();
}

// public override sealed Uno.Type get_PropertyType() :206
void Haslaamispaivakirja_accessor_bgImage_File__get_PropertyType_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Uno.UX.FileSource*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :208
void Haslaamispaivakirja_accessor_bgImage_File__SetAsObject_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::bgImage*>(obj, ::TYPES[0/*bgImage*/]))->SetFile(uCast< ::g::Uno::UX::FileSource*>(v, ::TYPES[1/*Uno.UX.FileSource*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :209
void Haslaamispaivakirja_accessor_bgImage_File__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_bgImage_File::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_bgImage_File::_name_;

// public generated Haslaamispaivakirja_accessor_bgImage_File() [instance] :201
void Haslaamispaivakirja_accessor_bgImage_File::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_bgImage_File New() [static] :201
Haslaamispaivakirja_accessor_bgImage_File* Haslaamispaivakirja_accessor_bgImage_File::New1()
{
    Haslaamispaivakirja_accessor_bgImage_File* obj1 = (Haslaamispaivakirja_accessor_bgImage_File*)uNew(Haslaamispaivakirja_accessor_bgImage_File_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
