// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Häsläämispäiväkirja_accessor_basicBtn_Button_Text;}

namespace g{

// internal sealed class Häsläämispäiväkirja_accessor_basicBtn_Button_Text :71
// {
::g::Uno::UX::PropertyAccessor_type* Häsläämispäiväkirja_accessor_basicBtn_Button_Text_typeof();
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__ctor_1_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__GetAsObject_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__get_Name_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this, ::g::Uno::UX::Selector* __retval);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__New1_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text** __retval);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__get_PropertyType_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this, uType** __retval);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__SetAsObject_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void Häsläämispäiväkirja_accessor_basicBtn_Button_Text__get_SupportsOriginSetter_fn(Häsläämispäiväkirja_accessor_basicBtn_Button_Text* __this, bool* __retval);

struct Häsläämispäiväkirja_accessor_basicBtn_Button_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Häsläämispäiväkirja_accessor_basicBtn_Button_Text_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return Häsläämispäiväkirja_accessor_basicBtn_Button_Text_typeof()->Init(), _name_; }

    void ctor_1();
    static Häsläämispäiväkirja_accessor_basicBtn_Button_Text* New1();
};
// }

} // ::g
