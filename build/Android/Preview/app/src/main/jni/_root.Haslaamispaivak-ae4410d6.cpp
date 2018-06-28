// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBigTest.h>
#include <_root.Haslaamispaivak-ae4410d6.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property :224
// {
static void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property_build(uType* type)
{
    ::TYPES[0] = ::g::BasicSwipeToggleBigTest_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*BasicSwipeToggleBigTest*/], offsetof(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property", options);
    type->fp_build_ = Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property(BasicSwipeToggleBigTest obj, Uno.UX.Selector name) :227
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__ctor_3_fn(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* __this, ::g::BasicSwipeToggleBigTest* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :229
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__Get1_fn(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::BasicSwipeToggleBigTest*>(obj, ::TYPES[0/*BasicSwipeToggleBigTest*/]))->Sendable(), void();
}

// public Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property New(BasicSwipeToggleBigTest obj, Uno.UX.Selector name) :227
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__New1_fn(::g::BasicSwipeToggleBigTest* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property** __retval)
{
    *__retval = Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :228
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__get_Object_fn(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :230
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__Set1_fn(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::BasicSwipeToggleBigTest*>(obj, ::TYPES[0/*BasicSwipeToggleBigTest*/]))->SetSendable(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :231
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property(BasicSwipeToggleBigTest obj, Uno.UX.Selector name) [instance] :227
void Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property::ctor_3(::g::BasicSwipeToggleBigTest* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property New(BasicSwipeToggleBigTest obj, Uno.UX.Selector name) [static] :227
Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property::New1(::g::BasicSwipeToggleBigTest* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property* obj1 = (Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property*)uNew(Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
