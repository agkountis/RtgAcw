#ifndef GLACIER_ENGINE_RENDER_TARGET_H_
#define GLACIER_ENGINE_RENDER_TARGET_H_
#include "GAPI_context_locator.h"
#include "internal/types.h"

namespace Glacier
{
	class RenderTarget : protected GAPIContextLocator {
	protected:
		Vec2i m_size;

	public:
		RenderTarget(const Vec2i& size) : m_size{ size }
		{
		}

		virtual ~RenderTarget() = default;

		virtual bool create() = 0;

		virtual bool bind() const = 0;

		virtual bool unbind() const = 0;
	};
}

#endif //GLACIER_ENGINE_RENDER_TARGET_H_
