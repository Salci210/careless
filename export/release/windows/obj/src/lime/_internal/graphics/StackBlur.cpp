// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_BlurStack
#include <lime/_internal/graphics/BlurStack.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_StackBlur
#include <lime/_internal/graphics/StackBlur.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_32_blur,"lime._internal.graphics.StackBlur","blur",0x11e5705e,"lime._internal.graphics.StackBlur.blur","lime/_internal/graphics/StackBlur.hx",32,0x80163c06)
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_38___stackBlurCanvasRGBA,"lime._internal.graphics.StackBlur","__stackBlurCanvasRGBA",0x767d35c4,"lime._internal.graphics.StackBlur.__stackBlurCanvasRGBA","lime/_internal/graphics/StackBlur.hx",38,0x80163c06)
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_10_boot,"lime._internal.graphics.StackBlur","boot",0x11e7b1e9,"lime._internal.graphics.StackBlur.boot","lime/_internal/graphics/StackBlur.hx",10,0x80163c06)
static const int _hx_array_data_b2c50e17_15[] = {
	(int)1,(int)171,(int)205,(int)293,(int)57,(int)373,(int)79,(int)137,(int)241,(int)27,(int)391,(int)357,(int)41,(int)19,(int)283,(int)265,(int)497,(int)469,(int)443,(int)421,(int)25,(int)191,(int)365,(int)349,(int)335,(int)161,(int)155,(int)149,(int)9,(int)278,(int)269,(int)261,(int)505,(int)245,(int)475,(int)231,(int)449,(int)437,(int)213,(int)415,(int)405,(int)395,(int)193,(int)377,(int)369,(int)361,(int)353,(int)345,(int)169,(int)331,(int)325,(int)319,(int)313,(int)307,(int)301,(int)37,(int)145,(int)285,(int)281,(int)69,(int)271,(int)267,(int)263,(int)259,(int)509,(int)501,(int)493,(int)243,(int)479,(int)118,(int)465,(int)459,(int)113,(int)446,(int)55,(int)435,(int)429,(int)423,(int)209,(int)413,(int)51,(int)403,(int)199,(int)393,(int)97,(int)3,(int)379,(int)375,(int)371,(int)367,(int)363,(int)359,(int)355,(int)351,(int)347,(int)43,(int)85,(int)337,(int)333,(int)165,(int)327,(int)323,(int)5,(int)317,(int)157,(int)311,(int)77,(int)305,(int)303,(int)75,(int)297,(int)294,(int)73,(int)289,(int)287,(int)71,(int)141,(int)279,(int)277,(int)275,(int)68,(int)135,(int)67,(int)133,(int)33,(int)262,(int)260,(int)129,(int)511,(int)507,(int)503,(int)499,(int)495,(int)491,(int)61,(int)121,(int)481,(int)477,(int)237,(int)235,(int)467,(int)232,(int)115,(int)457,(int)227,(int)451,(int)7,(int)445,(int)221,(int)439,(int)218,(int)433,(int)215,(int)427,(int)425,(int)211,(int)419,(int)417,(int)207,(int)411,(int)409,(int)203,(int)202,(int)401,(int)399,(int)396,(int)197,(int)49,(int)389,(int)387,(int)385,(int)383,(int)95,(int)189,(int)47,(int)187,(int)93,(int)185,(int)23,(int)183,(int)91,(int)181,(int)45,(int)179,(int)89,(int)177,(int)11,(int)175,(int)87,(int)173,(int)345,(int)343,(int)341,(int)339,(int)337,(int)21,(int)167,(int)83,(int)331,(int)329,(int)327,(int)163,(int)81,(int)323,(int)321,(int)319,(int)159,(int)79,(int)315,(int)313,(int)39,(int)155,(int)309,(int)307,(int)153,(int)305,(int)303,(int)151,(int)75,(int)299,(int)149,(int)37,(int)295,(int)147,(int)73,(int)291,(int)145,(int)289,(int)287,(int)143,(int)285,(int)71,(int)141,(int)281,(int)35,(int)279,(int)139,(int)69,(int)275,(int)137,(int)273,(int)17,(int)271,(int)135,(int)269,(int)267,(int)133,(int)265,(int)33,(int)263,(int)131,(int)261,(int)130,(int)259,(int)129,(int)257,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0876aa6d3697a386_21_boot,"lime._internal.graphics.StackBlur","boot",0x11e7b1e9,"lime._internal.graphics.StackBlur.boot","lime/_internal/graphics/StackBlur.hx",21,0x80163c06)
static const int _hx_array_data_b2c50e17_17[] = {
	(int)0,(int)9,(int)10,(int)11,(int)9,(int)12,(int)10,(int)11,(int)12,(int)9,(int)13,(int)13,(int)10,(int)9,(int)13,(int)13,(int)14,(int)14,(int)14,(int)14,(int)10,(int)13,(int)14,(int)14,(int)14,(int)13,(int)13,(int)13,(int)9,(int)14,(int)14,(int)14,(int)15,(int)14,(int)15,(int)14,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)15,(int)15,(int)14,(int)15,(int)15,(int)15,(int)15,(int)15,(int)15,(int)12,(int)14,(int)15,(int)15,(int)13,(int)15,(int)15,(int)15,(int)15,(int)16,(int)16,(int)16,(int)15,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)13,(int)16,(int)16,(int)16,(int)15,(int)16,(int)13,(int)16,(int)15,(int)16,(int)14,(int)9,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)16,(int)13,(int)14,(int)16,(int)16,(int)15,(int)16,(int)16,(int)10,(int)16,(int)15,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)16,(int)14,(int)16,(int)16,(int)14,(int)15,(int)16,(int)16,(int)16,(int)14,(int)15,(int)14,(int)15,(int)13,(int)16,(int)16,(int)15,(int)17,(int)17,(int)17,(int)17,(int)17,(int)17,(int)14,(int)15,(int)17,(int)17,(int)16,(int)16,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)11,(int)17,(int)16,(int)17,(int)16,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)16,(int)17,(int)17,(int)17,(int)16,(int)14,(int)17,(int)17,(int)17,(int)17,(int)15,(int)16,(int)14,(int)16,(int)15,(int)16,(int)13,(int)16,(int)15,(int)16,(int)14,(int)16,(int)15,(int)16,(int)12,(int)16,(int)15,(int)16,(int)17,(int)17,(int)17,(int)17,(int)17,(int)13,(int)16,(int)15,(int)17,(int)17,(int)17,(int)16,(int)15,(int)17,(int)17,(int)17,(int)16,(int)15,(int)17,(int)17,(int)14,(int)16,(int)17,(int)17,(int)16,(int)17,(int)17,(int)16,(int)15,(int)17,(int)16,(int)14,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)15,(int)16,(int)17,(int)14,(int)17,(int)16,(int)15,(int)17,(int)16,(int)17,(int)13,(int)17,(int)16,(int)17,(int)17,(int)16,(int)17,(int)14,(int)17,(int)16,(int)17,(int)16,(int)17,(int)16,(int)17,(int)9,
};
namespace lime{
namespace _internal{
namespace graphics{

void StackBlur_obj::__construct() { }

Dynamic StackBlur_obj::__CreateEmpty() { return new StackBlur_obj; }

void *StackBlur_obj::_hx_vtable = 0;

Dynamic StackBlur_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StackBlur_obj > _hx_result = new StackBlur_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StackBlur_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10e33dfd;
}

::Array< int > StackBlur_obj::MUL_TABLE;

::Array< int > StackBlur_obj::SHG_TABLE;

void StackBlur_obj::blur( ::lime::graphics::Image dest, ::lime::graphics::Image source, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,Float blurX,Float blurY,int quality){
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_32_blur)
HXLINE(  33)		dest->copyPixels(source,sourceRect,destPoint,null(),null(),null());
HXLINE(  34)		int _hx_tmp = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN(  34)		::lime::_internal::graphics::StackBlur_obj::_hx___stackBlurCanvasRGBA(dest,_hx_tmp,::Std_obj::_hx_int(sourceRect->height),blurX,blurY,quality);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(StackBlur_obj,blur,(void))

void StackBlur_obj::_hx___stackBlurCanvasRGBA( ::lime::graphics::Image image,int width,int height,Float blurX,Float blurY,int quality){
            	HX_GC_STACKFRAME(&_hx_pos_0876aa6d3697a386_38___stackBlurCanvasRGBA)
HXLINE(  42)		int radiusX = (::Math_obj::round(blurX) >> 1);
HXLINE(  43)		int radiusY = (::Math_obj::round(blurY) >> 1);
HXLINE(  45)		if (::hx::IsNull( ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE )) {
HXLINE(  45)			return;
            		}
HXLINE(  46)		if ((radiusX >= ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length)) {
HXLINE(  46)			radiusX = (::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length - 1);
            		}
HXLINE(  47)		if ((radiusY >= ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length)) {
HXLINE(  47)			radiusY = (::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->length - 1);
            		}
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if ((radiusX >= 0)) {
HXLINE(  48)			_hx_tmp = (radiusY < 0);
            		}
            		else {
HXLINE(  48)			_hx_tmp = true;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  48)			return;
            		}
HXLINE(  50)		int iterations = quality;
HXLINE(  51)		if ((iterations < 1)) {
HXLINE(  51)			iterations = 1;
            		}
HXLINE(  52)		if ((iterations > 3)) {
HXLINE(  52)			iterations = 3;
            		}
HXLINE(  54)		 ::lime::utils::ArrayBufferView px = image->get_data();
HXLINE(  55)		int x;
HXDLIN(  55)		int y;
HXDLIN(  55)		int i;
HXDLIN(  55)		int p;
HXDLIN(  55)		int yp;
HXDLIN(  55)		int yi;
HXDLIN(  55)		int yw;
HXLINE(  56)		int r;
HXDLIN(  56)		int g;
HXDLIN(  56)		int b;
HXDLIN(  56)		int a;
HXDLIN(  56)		int pr;
HXDLIN(  56)		int pg;
HXDLIN(  56)		int pb;
HXDLIN(  56)		int pa;
HXLINE(  57)		Float f;
HXLINE(  59)		int divx = ((radiusX + radiusX) + 1);
HXLINE(  60)		int divy = ((radiusY + radiusY) + 1);
HXLINE(  61)		int w = width;
HXLINE(  62)		int h = height;
HXLINE(  64)		int w1 = (w - 1);
HXLINE(  65)		int h1 = (h - 1);
HXLINE(  66)		int rxp1 = (radiusX + 1);
HXLINE(  67)		int ryp1 = (radiusY + 1);
HXLINE(  69)		 ::lime::_internal::graphics::BlurStack ssx =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX );
HXLINE(  70)		 ::lime::_internal::graphics::BlurStack sx = ssx;
HXLINE(  71)		{
HXLINE(  71)			int _g = 1;
HXDLIN(  71)			int _g1 = divx;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  73)				sx = (sx->n =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE(  75)		sx->n = ssx;
HXLINE(  77)		 ::lime::_internal::graphics::BlurStack ssy =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX );
HXLINE(  78)		 ::lime::_internal::graphics::BlurStack sy = ssy;
HXLINE(  79)		{
HXLINE(  79)			int _g2 = 1;
HXDLIN(  79)			int _g3 = divy;
HXDLIN(  79)			while((_g2 < _g3)){
HXLINE(  79)				_g2 = (_g2 + 1);
HXDLIN(  79)				int i = (_g2 - 1);
HXLINE(  81)				sy = (sy->n =  ::lime::_internal::graphics::BlurStack_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE(  83)		sy->n = ssy;
HXLINE(  85)		 ::lime::_internal::graphics::BlurStack si = null();
HXLINE(  87)		int mtx = ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->__get(radiusX);
HXLINE(  88)		int stx = ::lime::_internal::graphics::StackBlur_obj::SHG_TABLE->__get(radiusX);
HXLINE(  89)		int mty = ::lime::_internal::graphics::StackBlur_obj::MUL_TABLE->__get(radiusY);
HXLINE(  90)		int sty = ::lime::_internal::graphics::StackBlur_obj::SHG_TABLE->__get(radiusY);
HXLINE(  92)		while((iterations > 0)){
HXLINE(  94)			iterations = (iterations - 1);
HXLINE(  95)			yi = 0;
HXDLIN(  95)			yw = yi;
HXLINE(  96)			int ms = mtx;
HXLINE(  97)			int ss = stx;
HXLINE(  98)			y = h;
HXLINE(  99)			while(true){
HXLINE( 101)				pr = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & 255)) );
HXDLIN( 101)				r = (rxp1 * pr);
HXLINE( 102)				pg = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 1))) & 255)) );
HXDLIN( 102)				g = (rxp1 * pg);
HXLINE( 103)				pb = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 2))) & 255)) );
HXDLIN( 103)				b = (rxp1 * pb);
HXLINE( 104)				pa = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 3))) & 255)) );
HXDLIN( 104)				a = (rxp1 * pa);
HXLINE( 105)				sx = ssx;
HXLINE( 106)				i = rxp1;
HXLINE( 107)				while(true){
HXLINE( 109)					sx->r = pr;
HXLINE( 110)					sx->g = pg;
HXLINE( 111)					sx->b = pb;
HXLINE( 112)					sx->a = pa;
HXLINE( 113)					sx = sx->n;
HXLINE( 115)					i = (i - 1);
HXLINE( 107)					if (!((i > -1))) {
HXLINE( 107)						goto _hx_goto_5;
            					}
            				}
            				_hx_goto_5:;
HXLINE( 117)				{
HXLINE( 117)					int _g = 1;
HXDLIN( 117)					int _g1 = rxp1;
HXDLIN( 117)					while((_g < _g1)){
HXLINE( 117)						_g = (_g + 1);
HXDLIN( 117)						int i = (_g - 1);
HXLINE( 119)						int p1;
HXDLIN( 119)						if ((w1 < i)) {
HXLINE( 119)							p1 = w1;
            						}
            						else {
HXLINE( 119)							p1 = i;
            						}
HXDLIN( 119)						p = (yi + (p1 << 2));
HXLINE( 120)						r = (r + (sx->r = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & 255)) )));
HXLINE( 121)						g = (g + (sx->g = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 1))) & 255)) )));
HXLINE( 122)						b = (b + (sx->b = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 2))) & 255)) )));
HXLINE( 123)						a = (a + (sx->a = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 3))) & 255)) )));
HXLINE( 124)						sx = sx->n;
            					}
            				}
HXLINE( 127)				si = ssx;
HXLINE( 128)				{
HXLINE( 128)					int _g2 = 0;
HXDLIN( 128)					int _g3 = w;
HXDLIN( 128)					while((_g2 < _g3)){
HXLINE( 128)						_g2 = (_g2 + 1);
HXDLIN( 128)						int x = (_g2 - 1);
HXLINE( 130)						{
HXLINE( 130)							yi = (yi + 1);
HXDLIN( 130)							int val = ::hx::UShr((r * ms),ss);
HXDLIN( 130)							 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - 1)),val);
            						}
HXLINE( 131)						{
HXLINE( 131)							yi = (yi + 1);
HXDLIN( 131)							int val1 = ::hx::UShr((g * ms),ss);
HXDLIN( 131)							 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - 1)),val1);
            						}
HXLINE( 132)						{
HXLINE( 132)							yi = (yi + 1);
HXDLIN( 132)							int val2 = ::hx::UShr((b * ms),ss);
HXDLIN( 132)							 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - 1)),val2);
            						}
HXLINE( 133)						{
HXLINE( 133)							yi = (yi + 1);
HXDLIN( 133)							int val3 = ::hx::UShr((a * ms),ss);
HXDLIN( 133)							 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (yi - 1)),val3);
            						}
HXLINE( 134)						int p1;
HXDLIN( 134)						p = ((x + radiusX) + 1);
HXDLIN( 134)						if ((p < w1)) {
HXLINE( 134)							p1 = p;
            						}
            						else {
HXLINE( 134)							p1 = w1;
            						}
HXDLIN( 134)						p = ((yw + p1) << 2);
HXLINE( 135)						int si1 = si->r;
HXDLIN( 135)						r = (r - (si1 - (si->r = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & 255)) ))));
HXLINE( 136)						int si2 = si->g;
HXDLIN( 136)						g = (g - (si2 - (si->g = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 1))) & 255)) ))));
HXLINE( 137)						int si3 = si->b;
HXDLIN( 137)						b = (b - (si3 - (si->b = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 2))) & 255)) ))));
HXLINE( 138)						int si4 = si->a;
HXDLIN( 138)						a = (a - (si4 - (si->a = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 3))) & 255)) ))));
HXLINE( 139)						si = si->n;
            					}
            				}
HXLINE( 141)				yw = (yw + w);
HXLINE( 143)				y = (y - 1);
HXLINE(  99)				if (!((y > 0))) {
HXLINE(  99)					goto _hx_goto_4;
            				}
            			}
            			_hx_goto_4:;
HXLINE( 145)			ms = mty;
HXLINE( 146)			ss = sty;
HXLINE( 147)			{
HXLINE( 147)				int _g = 0;
HXDLIN( 147)				int _g1 = w;
HXDLIN( 147)				while((_g < _g1)){
HXLINE( 147)					_g = (_g + 1);
HXDLIN( 147)					int x = (_g - 1);
HXLINE( 149)					yi = (x << 2);
HXLINE( 150)					pr = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & 255)) );
HXDLIN( 150)					r = (ryp1 * pr);
HXLINE( 151)					pg = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 1))) & 255)) );
HXDLIN( 151)					g = (ryp1 * pg);
HXLINE( 152)					pb = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 2))) & 255)) );
HXDLIN( 152)					b = (ryp1 * pb);
HXLINE( 153)					pa = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 3))) & 255)) );
HXDLIN( 153)					a = (ryp1 * pa);
HXLINE( 154)					sy = ssy;
HXLINE( 155)					{
HXLINE( 155)						int _g1 = 0;
HXDLIN( 155)						int _g2 = ryp1;
HXDLIN( 155)						while((_g1 < _g2)){
HXLINE( 155)							_g1 = (_g1 + 1);
HXDLIN( 155)							int i = (_g1 - 1);
HXLINE( 157)							sy->r = pr;
HXLINE( 158)							sy->g = pg;
HXLINE( 159)							sy->b = pb;
HXLINE( 160)							sy->a = pa;
HXLINE( 161)							sy = sy->n;
            						}
            					}
HXLINE( 163)					yp = w;
HXLINE( 164)					{
HXLINE( 164)						int _g3 = 1;
HXDLIN( 164)						int _g4 = (radiusY + 1);
HXDLIN( 164)						while((_g3 < _g4)){
HXLINE( 164)							_g3 = (_g3 + 1);
HXDLIN( 164)							int i = (_g3 - 1);
HXLINE( 166)							yi = ((yp + x) << 2);
HXLINE( 167)							r = (r + (sy->r = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + yi)) & 255)) )));
HXLINE( 168)							g = (g + (sy->g = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 1))) & 255)) )));
HXLINE( 169)							b = (b + (sy->b = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 2))) & 255)) )));
HXLINE( 170)							a = (a + (sy->a = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (yi + 3))) & 255)) )));
HXLINE( 171)							sy = sy->n;
HXLINE( 172)							if ((i < h1)) {
HXLINE( 174)								yp = (yp + w);
            							}
            						}
            					}
HXLINE( 177)					yi = x;
HXLINE( 178)					si = ssy;
HXLINE( 180)					if ((iterations > 0)) {
HXLINE( 182)						int _g = 0;
HXDLIN( 182)						int _g1 = h;
HXDLIN( 182)						while((_g < _g1)){
HXLINE( 182)							_g = (_g + 1);
HXDLIN( 182)							int y = (_g - 1);
HXLINE( 184)							p = (yi << 2);
HXLINE( 185)							{
HXLINE( 185)								pa = ::hx::UShr((a * ms),ss);
HXDLIN( 185)								int val = pa;
HXDLIN( 185)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 3)),val);
            							}
HXLINE( 186)							if ((pa > 0)) {
HXLINE( 188)								{
HXLINE( 188)									int val = ::hx::UShr((r * ms),ss);
HXDLIN( 188)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val);
            								}
HXLINE( 189)								{
HXLINE( 189)									int val1 = ::hx::UShr((g * ms),ss);
HXDLIN( 189)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 1)),val1);
            								}
HXLINE( 190)								{
HXLINE( 190)									int val2 = ::hx::UShr((b * ms),ss);
HXDLIN( 190)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 2)),val2);
            								}
            							}
            							else {
HXLINE( 194)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 2)),0);
HXDLIN( 194)								int val = 0;
HXDLIN( 194)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 1)),val);
HXDLIN( 194)								int val1 = val;
HXDLIN( 194)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val1);
            							}
HXLINE( 196)							int p1;
HXDLIN( 196)							p = (y + ryp1);
HXDLIN( 196)							if ((p < h1)) {
HXLINE( 196)								p1 = p;
            							}
            							else {
HXLINE( 196)								p1 = h1;
            							}
HXDLIN( 196)							p = ((x + (p1 * w)) << 2);
HXLINE( 197)							int si1 = si->r;
HXDLIN( 197)							r = (r - (si1 - (si->r = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & 255)) ))));
HXLINE( 198)							int si2 = si->g;
HXDLIN( 198)							g = (g - (si2 - (si->g = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 1))) & 255)) ))));
HXLINE( 199)							int si3 = si->b;
HXDLIN( 199)							b = (b - (si3 - (si->b = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 2))) & 255)) ))));
HXLINE( 200)							int si4 = si->a;
HXDLIN( 200)							a = (a - (si4 - (si->a = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 3))) & 255)) ))));
HXLINE( 201)							si = si->n;
HXLINE( 202)							yi = (yi + w);
            						}
            					}
            					else {
HXLINE( 207)						int _g = 0;
HXDLIN( 207)						int _g1 = h;
HXDLIN( 207)						while((_g < _g1)){
HXLINE( 207)							_g = (_g + 1);
HXDLIN( 207)							int y = (_g - 1);
HXLINE( 209)							p = (yi << 2);
HXLINE( 210)							{
HXLINE( 210)								pa = ::hx::UShr((a * ms),ss);
HXDLIN( 210)								int val = pa;
HXDLIN( 210)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 3)),val);
            							}
HXLINE( 211)							if ((pa > 0)) {
HXLINE( 213)								f = (( (Float)(255) ) / ( (Float)(pa) ));
HXLINE( 214)								pr = ::Std_obj::_hx_int((( (Float)(::hx::UShr((r * ms),ss)) ) * f));
HXLINE( 215)								pg = ::Std_obj::_hx_int((( (Float)(::hx::UShr((g * ms),ss)) ) * f));
HXLINE( 216)								pb = ::Std_obj::_hx_int((( (Float)(::hx::UShr((b * ms),ss)) ) * f));
HXLINE( 217)								{
HXLINE( 217)									int val;
HXDLIN( 217)									if ((pr > 255)) {
HXLINE( 217)										val = 255;
            									}
            									else {
HXLINE( 217)										val = pr;
            									}
HXDLIN( 217)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val);
            								}
HXLINE( 218)								{
HXLINE( 218)									int val1;
HXDLIN( 218)									if ((pg > 255)) {
HXLINE( 218)										val1 = 255;
            									}
            									else {
HXLINE( 218)										val1 = pg;
            									}
HXDLIN( 218)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 1)),val1);
            								}
HXLINE( 219)								{
HXLINE( 219)									int val2;
HXDLIN( 219)									if ((pb > 255)) {
HXLINE( 219)										val2 = 255;
            									}
            									else {
HXLINE( 219)										val2 = pb;
            									}
HXDLIN( 219)									 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 2)),val2);
            								}
            							}
            							else {
HXLINE( 223)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 2)),0);
HXDLIN( 223)								int val = 0;
HXDLIN( 223)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + (p + 1)),val);
HXDLIN( 223)								int val1 = val;
HXDLIN( 223)								 ::__hxcpp_memory_set_byte(px->buffer->b,(px->byteOffset + p),val1);
            							}
HXLINE( 225)							int p1;
HXDLIN( 225)							p = (y + ryp1);
HXDLIN( 225)							if ((p < h1)) {
HXLINE( 225)								p1 = p;
            							}
            							else {
HXLINE( 225)								p1 = h1;
            							}
HXDLIN( 225)							p = ((x + (p1 * w)) << 2);
HXLINE( 226)							int si1 = si->r;
HXDLIN( 226)							r = (r - (si1 - (si->r = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + p)) & 255)) ))));
HXLINE( 227)							int si2 = si->g;
HXDLIN( 227)							g = (g - (si2 - (si->g = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 1))) & 255)) ))));
HXLINE( 228)							int si3 = si->b;
HXDLIN( 228)							b = (b - (si3 - (si->b = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 2))) & 255)) ))));
HXLINE( 229)							int si4 = si->a;
HXDLIN( 229)							a = (a - (si4 - (si->a = ( (int)(( ::__hxcpp_memory_get_byte(px->buffer->b,(px->byteOffset + (p + 3))) & 255)) ))));
HXLINE( 230)							si = si->n;
HXLINE( 231)							yi = (yi + w);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StackBlur_obj,_hx___stackBlurCanvasRGBA,(void))


StackBlur_obj::StackBlur_obj()
{
}

bool StackBlur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { outValue = blur_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MUL_TABLE") ) { outValue = ( MUL_TABLE ); return true; }
		if (HX_FIELD_EQ(inName,"SHG_TABLE") ) { outValue = ( SHG_TABLE ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__stackBlurCanvasRGBA") ) { outValue = _hx___stackBlurCanvasRGBA_dyn(); return true; }
	}
	return false;
}

bool StackBlur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MUL_TABLE") ) { MUL_TABLE=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"SHG_TABLE") ) { SHG_TABLE=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StackBlur_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StackBlur_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &StackBlur_obj::MUL_TABLE,HX_("MUL_TABLE",13,f2,74,4d)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &StackBlur_obj::SHG_TABLE,HX_("SHG_TABLE",c1,4a,a2,87)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StackBlur_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackBlur_obj::MUL_TABLE,"MUL_TABLE");
	HX_MARK_MEMBER_NAME(StackBlur_obj::SHG_TABLE,"SHG_TABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StackBlur_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackBlur_obj::MUL_TABLE,"MUL_TABLE");
	HX_VISIT_MEMBER_NAME(StackBlur_obj::SHG_TABLE,"SHG_TABLE");
};

#endif

::hx::Class StackBlur_obj::__mClass;

static ::String StackBlur_obj_sStaticFields[] = {
	HX_("MUL_TABLE",13,f2,74,4d),
	HX_("SHG_TABLE",c1,4a,a2,87),
	HX_("blur",a7,42,19,41),
	HX_("__stackBlurCanvasRGBA",5b,41,5c,36),
	::String(null())
};

void StackBlur_obj::__register()
{
	StackBlur_obj _hx_dummy;
	StackBlur_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics.StackBlur",17,0e,c5,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StackBlur_obj::__GetStatic;
	__mClass->mSetStaticField = &StackBlur_obj::__SetStatic;
	__mClass->mMarkFunc = StackBlur_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StackBlur_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StackBlur_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StackBlur_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StackBlur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StackBlur_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StackBlur_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_10_boot)
HXDLIN(  10)		MUL_TABLE = ::Array_obj< int >::fromData( _hx_array_data_b2c50e17_15,257);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0876aa6d3697a386_21_boot)
HXDLIN(  21)		SHG_TABLE = ::Array_obj< int >::fromData( _hx_array_data_b2c50e17_17,257);
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics