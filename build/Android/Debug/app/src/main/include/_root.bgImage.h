// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/bgImage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bgImage;}

namespace g{

// public partial sealed class bgImage :2
// {
::g::Fuse::Controls::Panel_type* bgImage_typeof();
void bgImage__ctor_7_fn(bgImage* __this);
void bgImage__get_Background1_fn(bgImage* __this, ::g::Uno::Float4* __retval);
void bgImage__set_Background1_fn(bgImage* __this, ::g::Uno::Float4* value);
void bgImage__get_File_fn(bgImage* __this, ::g::Uno::UX::FileSource** __retval);
void bgImage__set_File_fn(bgImage* __this, ::g::Uno::UX::FileSource* value);
void bgImage__InitializeUX_fn(bgImage* __this);
void bgImage__New4_fn(bgImage** __retval);
void bgImage__SetBackground1_fn(bgImage* __this, ::g::Uno::Float4* value, uObject* origin);
void bgImage__SetFile_fn(bgImage* __this, ::g::Uno::UX::FileSource* value, uObject* origin);
void bgImage__SetStretchMode_fn(bgImage* __this, uString* value, uObject* origin);
void bgImage__get_StretchMode_fn(bgImage* __this, uString** __retval);
void bgImage__set_StretchMode_fn(bgImage* __this, uString* value);

struct bgImage : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::FileSource*> _field_File;
    uStrong<uString*> _field_StretchMode;
    ::g::Uno::Float4 _field_Background;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_StretchMode_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Background_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return bgImage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return bgImage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return bgImage_typeof()->Init(), __selector2_; }

    void ctor_7();
    ::g::Uno::Float4 Background1();
    void Background1(::g::Uno::Float4 value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void InitializeUX();
    void SetBackground1(::g::Uno::Float4 value, uObject* origin);
    void SetFile(::g::Uno::UX::FileSource* value, uObject* origin);
    void SetStretchMode(uString* value, uObject* origin);
    uString* StretchMode();
    void StretchMode(uString* value);
    static bgImage* New4();
};
// }

} // ::g
