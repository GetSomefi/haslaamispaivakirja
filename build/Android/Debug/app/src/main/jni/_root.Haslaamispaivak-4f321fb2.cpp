// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlyingDock.h>
#include <_root.Haslaamispaivak-4f321fb2.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_FlyingDock_title_Property :351
// {
static void Haslaamispaivakirja_FlyingDock_title_Property_build(uType* type)
{
    ::TYPES[0] = ::g::FlyingDock_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*FlyingDock*/], offsetof(Haslaamispaivakirja_FlyingDock_title_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_FlyingDock_title_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_FlyingDock_title_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_FlyingDock_title_Property", options);
    type->fp_build_ = Haslaamispaivakirja_FlyingDock_title_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_FlyingDock_title_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_FlyingDock_title_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_FlyingDock_title_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_FlyingDock_title_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_FlyingDock_title_Property(FlyingDock obj, Uno.UX.Selector name) :354
void Haslaamispaivakirja_FlyingDock_title_Property__ctor_3_fn(Haslaamispaivakirja_FlyingDock_title_Property* __this, ::g::FlyingDock* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :356
void Haslaamispaivakirja_FlyingDock_title_Property__Get1_fn(Haslaamispaivakirja_FlyingDock_title_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::FlyingDock*>(obj, ::TYPES[0/*FlyingDock*/]))->title(), void();
}

// public Haslaamispaivakirja_FlyingDock_title_Property New(FlyingDock obj, Uno.UX.Selector name) :354
void Haslaamispaivakirja_FlyingDock_title_Property__New1_fn(::g::FlyingDock* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FlyingDock_title_Property** __retval)
{
    *__retval = Haslaamispaivakirja_FlyingDock_title_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :355
void Haslaamispaivakirja_FlyingDock_title_Property__get_Object_fn(Haslaamispaivakirja_FlyingDock_title_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :357
void Haslaamispaivakirja_FlyingDock_title_Property__Set1_fn(Haslaamispaivakirja_FlyingDock_title_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::FlyingDock*>(obj, ::TYPES[0/*FlyingDock*/]))->Settitle(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :358
void Haslaamispaivakirja_FlyingDock_title_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_FlyingDock_title_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_FlyingDock_title_Property(FlyingDock obj, Uno.UX.Selector name) [instance] :354
void Haslaamispaivakirja_FlyingDock_title_Property::ctor_3(::g::FlyingDock* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_FlyingDock_title_Property New(FlyingDock obj, Uno.UX.Selector name) [static] :354
Haslaamispaivakirja_FlyingDock_title_Property* Haslaamispaivakirja_FlyingDock_title_Property::New1(::g::FlyingDock* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_FlyingDock_title_Property* obj1 = (Haslaamispaivakirja_FlyingDock_title_Property*)uNew(Haslaamispaivakirja_FlyingDock_title_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
