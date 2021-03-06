

#pragma once

#include <infra/Config.h>

#include <infra/Forward.h>
#include <type/Forward.h>
#include <srlz/Forward.h>
#include <math/Forward.h>
#include <geom/Forward.h>
#include <gfx/Forward.h>

#ifndef MUD_GFX_PBR_EXPORT
#define MUD_GFX_PBR_EXPORT MUD_IMPORT
#endif


    
    

namespace std {

    
    
}

namespace mud {
namespace ui {

    
    
}
}

namespace glm {

    
    
}

namespace mud {
namespace gfx {

    
    
}
}

namespace json11 {

    
    
}

namespace mud {

    enum ShaderOptionLight : unsigned int;
    enum ShaderOptionRadiance : unsigned int;
    enum ShaderOptionShadow : unsigned int;
    enum ShaderModeShadow : unsigned int;
    enum CSMFilterMode : unsigned int;
    enum ShaderOptionBlur : unsigned int;
    enum ShaderOptionDofBlur : unsigned int;
    enum ShaderOptionGlow : unsigned int;
    enum TonemapShaderOption : unsigned int;
    enum TonemapShaderMode : unsigned int;
    enum class TonemapMode : unsigned int;
    
    
	class BlockGeometry;
    class BlockLight;
    struct ReflectionRenderer;
    struct ForwardRenderer;
	struct DeferredRenderer;
    class BlockRadiance;
    struct ReflectionCubemap;
    class ReflectionAtlas;
    class ReflectionProbe;
	class PassGeometry;
	class PassLights;
	class PassOpaque;
	class PassAlpha;
    class PassProbes;
    class BlockReflection;
    struct ShadowCubemap;
    class ShadowAtlas;
    struct CSMShadow;
    class PassShadow;
    class PassShadowmap;
    struct ShadowRenderer;
    struct LightBounds;
    struct LightShadow;
    class BlockShadow;
    struct EffectBlurUniform;
    struct BlurKernel;
    class BlockBlur;
    struct DofBlur;
    struct DofBlurUniform;
    class BlockDofBlur;
    struct Glow;
    struct GlowUniform;
	class BlockGI;
	class BlockGIBake;
	class BlockGITrace;
	class BlockLightmap;
    class BlockGlow;
    struct BCS;
    struct Tonemap;
    struct RenderFilters;
    struct TonemapUniform;
    class BlockTonemap;
}

namespace mud {
namespace detail {

    
    
}
}

namespace bgfx {

    
    
}

namespace bimg {

    
    
}

namespace bx {

    
    
}

