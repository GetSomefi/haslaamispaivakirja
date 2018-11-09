// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_accessor_bgImage_File;}

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_bgImage_File :201
// {
::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_bgImage_File_typeof();
void Haslaamispaivakirja_accessor_bgImage_File__ctor_1_fn(Haslaamispaivakirja_accessor_bgImage_File* __this);
void Haslaamispaivakirja_accessor_bgImage_File__GetAsObject_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Haslaamispaivakirja_accessor_bgImage_File__get_Name_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::Selector* __retval);
void Haslaamispaivakirja_accessor_bgImage_File__New1_fn(Haslaamispaivakirja_accessor_bgImage_File** __retval);
void Haslaamispaivakirja_accessor_bgImage_File__get_PropertyType_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, uType** __retval);
void Haslaamispaivakirja_accessor_bgImage_File__SetAsObject_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void Haslaamispaivakirja_accessor_bgImage_File__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_bgImage_File* __this, bool* __retval);

struct Haslaamispaivakirja_accessor_bgImage_File : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Haslaamispaivakirja_accessor_bgImage_File_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return Haslaamispaivakirja_accessor_bgImage_File_typeof()->Init(), _name_; }

    void ctor_1();
    static Haslaamispaivakirja_accessor_bgImage_File* New1();
};
// }

} // ::g
