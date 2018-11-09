// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseControlsImage_File_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseControlsImage_File_Property :611
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseControlsImage_File_Property_typeof();
void Haslaamispaivakirja_FuseControlsImage_File_Property__ctor_3_fn(Haslaamispaivakirja_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseControlsImage_File_Property__Get1_fn(Haslaamispaivakirja_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void Haslaamispaivakirja_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseControlsImage_File_Property** __retval);
void Haslaamispaivakirja_FuseControlsImage_File_Property__get_Object_fn(Haslaamispaivakirja_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseControlsImage_File_Property__Set1_fn(Haslaamispaivakirja_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct Haslaamispaivakirja_FuseControlsImage_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseControlsImage_File_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
