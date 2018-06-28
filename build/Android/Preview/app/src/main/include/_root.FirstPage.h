// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/FirstPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace basic{struct TextBoxAction;}}
namespace g{namespace Fuse{namespace Controls{struct Slider;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BasicSwipeToggle;}
namespace g{struct BasicSwipeToggleBig;}
namespace g{struct FirstPage;}

namespace g{

// public partial sealed class FirstPage :2
// {
::g::Fuse::Controls::Panel_type* FirstPage_typeof();
void FirstPage__ctor_8_fn(FirstPage* __this, ::g::Fuse::Navigation::Router* router1);
void FirstPage__InitializeUX_fn(FirstPage* __this);
void FirstPage__New5_fn(::g::Fuse::Navigation::Router* router1, FirstPage** __retval);

struct FirstPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_X_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_X_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::BasicSwipeToggleBig*> mita_kiusaus;
    uStrong< ::g::BasicSwipeToggleBig*> mita_varkaus;
    uStrong< ::g::BasicSwipeToggleBig*> mita_inho;
    uStrong< ::g::BasicSwipeToggleBig*> mita_teinvaarin;
    uStrong< ::g::BasicSwipeToggleBig*> mita_riitely;
    uStrong< ::g::basic::TextBoxAction*> mita_muuta;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::BasicSwipeToggleBig*> milloin_aamu;
    uStrong< ::g::BasicSwipeToggleBig*> milloin_iltapaiva;
    uStrong< ::g::BasicSwipeToggleBig*> milloin_ilta;
    uStrong< ::g::BasicSwipeToggle*> missa_koulu;
    uStrong< ::g::BasicSwipeToggle*> missa_asuntola;
    uStrong< ::g::BasicSwipeToggle*> missa_liikuntasali;
    uStrong< ::g::BasicSwipeToggle*> missa_oleskelutila;
    uStrong< ::g::BasicSwipeToggle*> missa_wc;
    uStrong< ::g::BasicSwipeToggle*> missa_kanslia;
    uStrong< ::g::BasicSwipeToggle*> missa_ruokala;
    uStrong< ::g::BasicSwipeToggle*> missa_ulkona;
    uStrong< ::g::BasicSwipeToggle*> missa_kadulla;
    uStrong< ::g::BasicSwipeToggle*> missa_kaytavalla;
    uStrong< ::g::BasicSwipeToggle*> missa_toissa;
    uStrong< ::g::basic::TextBoxAction*> missa_muualla;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::BasicSwipeToggleBig*> kuka_toinen;
    uStrong< ::g::BasicSwipeToggleBig*> kuka_vanhempihoitaja;
    uStrong< ::g::BasicSwipeToggleBig*> kuka_opettaja;
    uStrong< ::g::BasicSwipeToggleBig*> kuka_koulukuraattori;
    uStrong< ::g::basic::TextBoxAction*> kuka_jokumuu;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_loin;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_juoksin;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_huusin;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_itkin;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_kavelinpois;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_rikoinjotain;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_kerroinaiku;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_kerroinkave;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_envalittanut;
    uStrong< ::g::BasicSwipeToggleBig*> mitateit_hoidinasianpuhumalla;
    uStrong< ::g::basic::TextBoxAction*> mitateit_vihanhallinanmenetelma;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::basic::TextBoxAction*> mitateit_sosiaalinentaito;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::basic::TextBoxAction*> mitateit_jotainmuuta;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::BasicSwipeToggleBig*> viha_kihisinraivosta;
    uStrong< ::g::BasicSwipeToggleBig*> viha_todellavihainen;
    uStrong< ::g::BasicSwipeToggleBig*> viha_melkovihainen;
    uStrong< ::g::BasicSwipeToggleBig*> viha_lievaviha;
    uStrong< ::g::BasicSwipeToggleBig*> viha_enlainkaan;
    uStrong< ::g::Fuse::Controls::Slider*> slider_viha;
    uStrong< ::g::BasicSwipeToggleBig*> hallinta_1;
    uStrong< ::g::BasicSwipeToggleBig*> hallinta_2;
    uStrong< ::g::BasicSwipeToggleBig*> hallinta_3;
    uStrong< ::g::BasicSwipeToggleBig*> hallinta_4;
    uStrong< ::g::BasicSwipeToggleBig*> hallinta_5;
    uStrong< ::g::Fuse::Controls::Slider*> slider_hallinta;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return FirstPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return FirstPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return FirstPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return FirstPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return FirstPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return FirstPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return FirstPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return FirstPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return FirstPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return FirstPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return FirstPage_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return FirstPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return FirstPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return FirstPage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return FirstPage_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return FirstPage_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return FirstPage_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return FirstPage_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return FirstPage_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return FirstPage_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return FirstPage_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return FirstPage_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return FirstPage_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return FirstPage_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return FirstPage_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return FirstPage_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return FirstPage_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return FirstPage_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return FirstPage_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return FirstPage_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return FirstPage_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return FirstPage_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return FirstPage_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return FirstPage_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return FirstPage_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return FirstPage_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return FirstPage_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return FirstPage_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return FirstPage_typeof()->Init(), __selector37_; }
    static ::g::Uno::UX::Selector __selector38_;
    static ::g::Uno::UX::Selector& __selector38() { return FirstPage_typeof()->Init(), __selector38_; }
    static ::g::Uno::UX::Selector __selector39_;
    static ::g::Uno::UX::Selector& __selector39() { return FirstPage_typeof()->Init(), __selector39_; }
    static ::g::Uno::UX::Selector __selector40_;
    static ::g::Uno::UX::Selector& __selector40() { return FirstPage_typeof()->Init(), __selector40_; }
    static ::g::Uno::UX::Selector __selector41_;
    static ::g::Uno::UX::Selector& __selector41() { return FirstPage_typeof()->Init(), __selector41_; }
    static ::g::Uno::UX::Selector __selector42_;
    static ::g::Uno::UX::Selector& __selector42() { return FirstPage_typeof()->Init(), __selector42_; }
    static ::g::Uno::UX::Selector __selector43_;
    static ::g::Uno::UX::Selector& __selector43() { return FirstPage_typeof()->Init(), __selector43_; }
    static ::g::Uno::UX::Selector __selector44_;
    static ::g::Uno::UX::Selector& __selector44() { return FirstPage_typeof()->Init(), __selector44_; }
    static ::g::Uno::UX::Selector __selector45_;
    static ::g::Uno::UX::Selector& __selector45() { return FirstPage_typeof()->Init(), __selector45_; }
    static ::g::Uno::UX::Selector __selector46_;
    static ::g::Uno::UX::Selector& __selector46() { return FirstPage_typeof()->Init(), __selector46_; }
    static ::g::Uno::UX::Selector __selector47_;
    static ::g::Uno::UX::Selector& __selector47() { return FirstPage_typeof()->Init(), __selector47_; }
    static ::g::Uno::UX::Selector __selector48_;
    static ::g::Uno::UX::Selector& __selector48() { return FirstPage_typeof()->Init(), __selector48_; }
    static ::g::Uno::UX::Selector __selector49_;
    static ::g::Uno::UX::Selector& __selector49() { return FirstPage_typeof()->Init(), __selector49_; }
    static ::g::Uno::UX::Selector __selector50_;
    static ::g::Uno::UX::Selector& __selector50() { return FirstPage_typeof()->Init(), __selector50_; }
    static ::g::Uno::UX::Selector __selector51_;
    static ::g::Uno::UX::Selector& __selector51() { return FirstPage_typeof()->Init(), __selector51_; }
    static ::g::Uno::UX::Selector __selector52_;
    static ::g::Uno::UX::Selector& __selector52() { return FirstPage_typeof()->Init(), __selector52_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static FirstPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
